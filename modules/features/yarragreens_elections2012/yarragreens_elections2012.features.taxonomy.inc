<?php
/**
 * @file
 * yarragreens_elections2012.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function yarragreens_elections2012_taxonomy_default_vocabularies() {
  return array(
    'ward' => array(
      'name' => 'Ward',
      'machine_name' => 'ward',
      'description' => 'Local council ward',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
