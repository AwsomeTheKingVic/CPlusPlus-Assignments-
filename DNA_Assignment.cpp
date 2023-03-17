#include <iostream>
#include <String>
using namespace std;

//makes the codon string
string codon() {

    string str = "ucag";
    string str2 = "";

    for (int i = 0; i < 4; i++) {

        for (int j = 0; j < 4; j++) {

            for (int k = 0; k < 4; k++) {

                str2.append(str.substr(j, 1) + str.substr(i, 1) + str.substr(k, 1));

            }

        }

    }

    return str2;

}

//makes the acidstring
string acidsstring(string correctedRNA, string Amino) {

    string Codons = codon();
    string Aminosub = "";
    string Codonssub = "";
    string RNA_sub = "";
    string acids = "";

    for (int i = 0; i < correctedRNA.size(); i += 3) {

        RNA_sub = correctedRNA.substr(i, 3);

        for (int j = 0; j < Amino.size(); j += 3) {

            Aminosub = Amino.substr(j, 3);

            Codonssub = Codons.substr(j, 3);

            if (RNA_sub.compare(Codonssub) == 0) {

                acids.append(Aminosub);

            }

        }

    }

    return acids;

}

//replaces the aaa with gaa when next to a aau
string Fixed(string mRNA_Template) {

    string correctedRNA = "";

    string RNA_sub = "";

    for (int i = 0; i < mRNA_Template.size(); i += 3) {

        string Pre_RNA = RNA_sub;

        RNA_sub = mRNA_Template.substr(i, 3);

        correctedRNA.append(RNA_sub);

        if (Pre_RNA == "aau" && RNA_sub == "aaa") {

            correctedRNA.replace(i, 3, "gaa");

        }

    }

    return correctedRNA;

}

//makes the Protein from the RNA
string Protein(string mRNA_Template) {

    string mRNA_Protein = mRNA_Template;

    //cap
    mRNA_Protein.insert(0, "g");

    //UTR yellow
    mRNA_Protein.insert(1, "augauguagaug");

    //UTR magenta
    mRNA_Protein.append("aauaaa");

    //tail
    mRNA_Protein.append(50, 'a');

    return mRNA_Protein;

}

//makes the RNA form the DNA
string RNA(string DNA_Template) {

    string mRNA_Template = "";
    char letter;

    for (int i = 0; i < DNA_Template.length(); i++) {

        letter = DNA_Template[i];

        if (letter == 'a') {

            mRNA_Template.append("u");

        }
        else if (letter == 'c') {

            mRNA_Template.append("g");

        }
        else if (letter == 'g') {

            mRNA_Template.append("c");

        }
        else if (letter == 't') {

            mRNA_Template.append("a");

        }

    }

    return mRNA_Template;

}

//pairs the DNA
string DNA(string DNA_Template) {

    string DNA_non_Template = "";
    char letter;

    for (int i = 0; i < DNA_Template.length(); i++) {

        letter = DNA_Template[i];

        if (letter == 'a') {

            DNA_non_Template.append("t");

        }
        else if (letter == 'c') {

            DNA_non_Template.append("g");

        }
        else if (letter == 'g') {

            DNA_non_Template.append("c");

        }
        else if (letter == 't') {

            DNA_non_Template.append("a");

        }

    }

    return DNA_non_Template;

}

//removes spaces from DNA
string DNAnospace(string DNA_Template){

    int spacefound = 0;

    while (DNA_Template.find(" ", spacefound) != string::npos) {

        spacefound = DNA_Template.find(" ", spacefound);

        DNA_Template.erase(spacefound, 1);

        ++spacefound;

    }

    return DNA_Template;

}

int main()
{
    //making the string sets
    string DNA_Template = "tac ttattaaata aaggagttct catgattcaa ttttcaatta atcgcacatt atttattcat";
    DNA_Template = DNAnospace(DNA_Template);

    string DNA_non_Template = DNA(DNA_Template);
    string mRNA_Template = RNA(DNA_Template);
    string mRNA_Protein = Protein(mRNA_Template);
    string correctedRNA = Fixed(mRNA_Template);
    string RNA_sub = "";

    //copies to modify
    string mRNA_copy = mRNA_Template;

    //acids
    string Amino = "PhePheLeuLeuLeuLeuLeuLeuIleIleIleMetValValValValSerSerSerSerProProProProThrThrThrThrAlaAlaAlaAlaTyrTyrStpStpHisHisGlnGlnAsnAsnLysLysAspAspGluGluCysCysStpTrpArgArgArgArgSerSerArgArgGlyGlyGlyGly";
    string Aminosub = "";
    string Codons = codon();
    string Codonssub = "";
    string acids = acidsstring(correctedRNA,Amino);
    
    //prints answers for now
    cout << "DNA Strand" << endl;
    cout << "Template: " << '\t' << DNA_Template << endl;
    cout << "pairs   : " << '\t' << DNA_non_Template << endl;
    cout << "RNA Strand" << endl;
    cout << "Template: " << '\t' << DNA_Template << endl;
    cout << "RNA     : " << '\t' << mRNA_Template << endl;
    cout << "RNA copy: " << '\t' << mRNA_copy << endl;
    cout << "corrected:" << '\t' << correctedRNA << endl;
    cout << "Modified  " << endl;
    cout << "Protein : " << '\t' << mRNA_Protein << endl;
    cout << "Acids" << endl;
    cout << "Amino   : " << '\t' << Amino << endl;
    cout << "Condon  : " << '\t' << Codons << endl;
    cout << "Acids   : " << '\t' << acids << endl;
    
}
