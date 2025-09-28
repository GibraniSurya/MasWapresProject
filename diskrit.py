#NOMOR_1
set1 = set()
set1.add(25106050034)
set1.add ('Gibrani Surya Sangtara')
set1.add('MA AL-ISLAM')
set1.add('SNBT')
set1.add(2)
print(set1)

#NOMOR_2
set2 = set()
set2.add(25106050031)
set2.add('Muhammad Fauzan')
set2.add('SMK 2 Jember')
set2.add('SNBT')
set2.add(2)
print(set2)


uniset1 =set1.union(set2)
print('union :',uniset1)

interset1 = set1 & set2
print('intersction :',interset1)

set4 = set1 - set2
print("S1 = ", set4)

set5 = set1.difference(set2)
print("Difference = ", set5)

set6= set1 ^ set2
print("Symmetric difference = ", set6)


#NOMOR_3
relation1 = {(1, 'SNBP', 'MAN 1 Kulon Progo', 'Ahmad Among Prasojo', 25106050013),(2, 'Gibrani Surya Sangtara', 'MA AL-ISLAM', 'SNBT', 25106050034),
(2, 'Muhammad Fauzan', 25106050031, 'SNBT', 'SMK 2 Jember')}

relation_nama = {'Gibrani Surya Sangtara','Ahamd Among Prasojo','Muhammad fauzan'}
print (relation_nim)
print(relation_nama)
print(relation_jalurmasuk)
print(relation_pilihan)

#nomor_4
