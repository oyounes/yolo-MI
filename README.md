yolo-MI
=======

Data pipeline
-------------

```
Text (list of reviews)

     | Spliting
     v

List of splitted reviews

     | Stop words removing, punctuation filtering
     v

List of filtered reviews

     | Lemmatization
     v

List of processed reviews

     | n-gram frequence analysis 
     v

Statistics

     | 
     v

Classification
```

Tools
-----

- Stop words removing, punctuation removing : <https://code.google.com/p/stop-words/>
- Lemmatization : <https://code.google.com/p/wordnet-blast/>