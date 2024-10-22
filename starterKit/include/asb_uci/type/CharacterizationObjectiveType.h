/** @file CharacterizationObjectiveType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:12 PM
 *
 * <pre>
 * Unclassified               U N C L A S S I F I E D               Unclassified
 *
 * DISTRIBUTION STATEMENT D: Distribution authorized to Department of Defense
 *    and U.S. DoD contractors only, Critical Technology, Export Controlled,
 *    26 January 2023. Other requests for this document shall be referred to
 *    AFLCMC/XA (OAMO), Wright-Patterson AFB OH 45433.
 *
 * DESTRUCTION NOTICE: Destroy by any method that will prevent disclosure of
 *    contents or reconstruction of the document.
 *
 * WARNING - This document contains technical data whose export is restricted
 *    by the Arms Export Control Act (Section 2751 of Title 22, United States
 *    Code) or the Export Control Reform Act of 2018 (Chapter 58 Sections
 *    4801-4852 of Title 50, United States Code). Violations of these export
 *    laws are subject to severe criminal penalties. Disseminate in accordance
 *    with provisions of DoD Directive 5230.25 and DoD Instruction 2040.02.
 *
 * Controlled by: USAF
 * Controlled by: AFLCMC/XA (OAMO)
 * CUI Category(ies): CTI, EXPT
 * Distribution Statement D
 * POC: Wayne Artuso, 937-713-5124
 *
 * CUI//SP-CTI/SP-EXPT
 * </pre>
 *
 */

#ifndef ASB_UCI_TYPE_CHARACTERIZATIONOBJECTIVETYPE_H
#define ASB_UCI_TYPE_CHARACTERIZATIONOBJECTIVETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../../cppInterface/2.3.2/include/uci/base/Accessor.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CharacterizationObjectiveType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class CharacterizationOptionsType;
class IdentificationVerificationType;
class SatelliteOperationsChangesCharacterizationType;
class StabilityCharacterizationType;
class StructureAssessmentType;

/** See annotations in child elements and messages/elements that use this type for details. */
class CharacterizationObjectiveType : public virtual uci::type::CharacterizationObjectiveType {
public:
  /** The constructor */
  CharacterizationObjectiveType();

  /** The copy constructor
    *
    * @param rhs The CharacterizationObjectiveType to copy from
    */
  CharacterizationObjectiveType(const CharacterizationObjectiveType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The CharacterizationObjectiveType to move from
    */
  CharacterizationObjectiveType(CharacterizationObjectiveType&& rhs) = delete;

  /** The assignment operator [not supported]
    *
    * @param rhs The CharacterizationObjectiveType to copy from
    * @return The CharacterizationObjectiveType that was assigned
    */
  CharacterizationObjectiveType& operator=(const CharacterizationObjectiveType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The CharacterizationObjectiveType to move from
    * @return The CharacterizationObjectiveType that was assigned
    */
  CharacterizationObjectiveType& operator=(CharacterizationObjectiveType&& rhs) = delete;

  /** The destructor */
  virtual ~CharacterizationObjectiveType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CharacterizationObjectiveType whose contents are to be used to set this
    *      uci::type::CharacterizationObjectiveType's contents.
    */
  void copy(const uci::type::CharacterizationObjectiveType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CharacterizationObjectiveType whose contents are to be used to set this
    *      uci::type::CharacterizationObjectiveType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::CharacterizationObjectiveType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value
    */
  uci::type::CharacterizationObjectiveType::CharacterizationObjectiveTypeChoice getCharacterizationObjectiveTypeChoiceOrdinal() const noexcept override;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getCharacterizationObjectiveTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In
    * addition, the access methods associated with the chosen element will be enabled and will provide access to the chosen
    * element.
    *
    * @param ordinal The ordinal to set this choice's selected ordinal to.
    * @param type The type of data that is to be made available when the ordinal is set.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CharacterizationObjectiveType& setCharacterizationObjectiveTypeChoiceOrdinal(uci::type::CharacterizationObjectiveType::CharacterizationObjectiveTypeChoice ordinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the PhenomenologyCollection field contained in this message fragment
    *
    * @return The const reference to the accessor to the PhenomenologyCollection field.
    */
  uci::type::CharacterizationOptionsType& getPhenomenologyCollection_() const;

  /** Returns the accessor to the PhenomenologyCollection field contained in this message fragment
    *
    * @return The reference to the accessor to the PhenomenologyCollection field.
    */
  const uci::type::CharacterizationOptionsType& getPhenomenologyCollection() const override;

  /** Returns the accessor to the PhenomenologyCollection field contained in this message fragment
    *
    * @return The reference to the accessor to the PhenomenologyCollection field.
    */
  uci::type::CharacterizationOptionsType& getPhenomenologyCollection() override;

  /** Sets this choice's choice to be phenomenologyCollection and initializes phenomenologyCollection to be the specified
    * value. A deep copy will be used by this method to set phenomenologyCollection
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CharacterizationObjectiveType& setPhenomenologyCollection(const uci::type::CharacterizationOptionsType& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by PhenomenologyCollection.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by PhenomenologyCollection, false
    *      otherwise.
    */
  bool isPhenomenologyCollection() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by PhenomenologyCollection.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by PhenomenologyCollection.
    */
  uci::type::CharacterizationOptionsType& choosePhenomenologyCollection(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by PhenomenologyCollection.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by PhenomenologyCollection.
    */
  uci::type::CharacterizationOptionsType& choosePhenomenologyCollection(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the StabilityAndOrientationAssessment field contained in this message fragment
    *
    * @return The const reference to the accessor to the StabilityAndOrientationAssessment field.
    */
  uci::type::StabilityCharacterizationType& getStabilityAndOrientationAssessment_() const;

  /** Returns the accessor to the StabilityAndOrientationAssessment field contained in this message fragment
    *
    * @return The reference to the accessor to the StabilityAndOrientationAssessment field.
    */
  const uci::type::StabilityCharacterizationType& getStabilityAndOrientationAssessment() const override;

  /** Returns the accessor to the StabilityAndOrientationAssessment field contained in this message fragment
    *
    * @return The reference to the accessor to the StabilityAndOrientationAssessment field.
    */
  uci::type::StabilityCharacterizationType& getStabilityAndOrientationAssessment() override;

  /** Sets this choice's choice to be stabilityAndOrientationAssessment and initializes stabilityAndOrientationAssessment
    * to be the specified value. A deep copy will be used by this method to set stabilityAndOrientationAssessment
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CharacterizationObjectiveType& setStabilityAndOrientationAssessment(const uci::type::StabilityCharacterizationType& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by
    * StabilityAndOrientationAssessment.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by
    *      StabilityAndOrientationAssessment, false otherwise.
    */
  bool isStabilityAndOrientationAssessment() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by StabilityAndOrientationAssessment.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by
    *      StabilityAndOrientationAssessment.
    */
  uci::type::StabilityCharacterizationType& chooseStabilityAndOrientationAssessment(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by StabilityAndOrientationAssessment.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by
    *      StabilityAndOrientationAssessment.
    */
  uci::type::StabilityCharacterizationType& chooseStabilityAndOrientationAssessment(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the StructureAssessment field contained in this message fragment
    *
    * @return The const reference to the accessor to the StructureAssessment field.
    */
  uci::type::StructureAssessmentType& getStructureAssessment_() const;

  /** Returns the accessor to the StructureAssessment field contained in this message fragment
    *
    * @return The const reference to the accessor to the StructureAssessment field.
    */
  const uci::type::StructureAssessmentType& getStructureAssessment() const override;

  /** Returns the accessor to the StructureAssessment field contained in this message fragment
    *
    * @return The reference to the accessor to the StructureAssessment field.
    */
  uci::type::StructureAssessmentType& getStructureAssessment() override;

  /** Sets this choice's choice to be StructureAssessment and initializes StructureAssessment to be the specified value. A
    * deep copy will be used by this method to set StructureAssessment
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CharacterizationObjectiveType& setStructureAssessment(const uci::type::StructureAssessmentType& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by StructureAssessment.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by StructureAssessment, false
    *      otherwise.
    */
  bool isStructureAssessment() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by StructureAssessment.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by StructureAssessment.
    */
  uci::type::StructureAssessmentType& chooseStructureAssessment(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by StructureAssessment.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by StructureAssessment.
    */
  uci::type::StructureAssessmentType& chooseStructureAssessment(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the IdentificationVerification field contained in this message fragment
    *
    * @return The const reference to the accessor to the IdentificationVerification field.
    */
  uci::type::IdentificationVerificationType& getIdentificationVerification_() const;

  /** Returns the accessor to the IdentificationVerification field contained in this message fragment
    *
    * @return The reference to the accessor to the IdentificationVerification field.
    */
  const uci::type::IdentificationVerificationType& getIdentificationVerification() const override;

  /** Returns the accessor to the IdentificationVerification field contained in this message fragment
    *
    * @return The reference to the accessor to the IdentificationVerification field.
    */
  uci::type::IdentificationVerificationType& getIdentificationVerification() override;

  /** Sets this choice's choice to be identificationVerification and initializes identificationVerification to be the
    * specified value. A deep copy will be used by this method to set identificationVerification
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CharacterizationObjectiveType& setIdentificationVerification(const uci::type::IdentificationVerificationType& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by IdentificationVerification.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by IdentificationVerification,
    *      false otherwise.
    */
  bool isIdentificationVerification() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by IdentificationVerification.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by IdentificationVerification.
    */
  uci::type::IdentificationVerificationType& chooseIdentificationVerification(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by IdentificationVerification.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by IdentificationVerification.
    */
  uci::type::IdentificationVerificationType& chooseIdentificationVerification(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the OperationsChanges field contained in this message fragment
    *
    * @return The const reference to the accessor to the OperationsChanges field.
    */
  uci::type::SatelliteOperationsChangesCharacterizationType& getOperationsChanges_() const;

  /** Returns the accessor to the OperationsChanges field contained in this message fragment
    *
    * @return The reference to the accessor to the OperationsChanges field.
    */
  const uci::type::SatelliteOperationsChangesCharacterizationType& getOperationsChanges() const override;

  /** Returns the accessor to the OperationsChanges field contained in this message fragment
    *
    * @return The reference to the accessor to the OperationsChanges field.
    */
  uci::type::SatelliteOperationsChangesCharacterizationType& getOperationsChanges() override;

  /** Sets this choice's choice to be operationsChanges and initializes operationsChanges to be the specified value. A deep
    * copy will be used by this method to set operationsChanges
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CharacterizationObjectiveType& setOperationsChanges(const uci::type::SatelliteOperationsChangesCharacterizationType& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by OperationsChanges.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by OperationsChanges, false
    *      otherwise.
    */
  bool isOperationsChanges() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by OperationsChanges.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by OperationsChanges.
    */
  uci::type::SatelliteOperationsChangesCharacterizationType& chooseOperationsChanges(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by OperationsChanges.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by OperationsChanges.
    */
  uci::type::SatelliteOperationsChangesCharacterizationType& chooseOperationsChanges(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<CharacterizationObjectiveType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::CharacterizationObjectiveType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

  /** 
    *
    * @param accessor .
    * @param propTree .
    * @param nodeName .
    * @param createNode .
    * @param addTypeAttribute .
    * @param checkIfDerivation .
    * @param topLevel .
    * @return .
    */
  static std::string serialize(const uci::type::CharacterizationObjectiveType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<CharacterizationOptionsType> phenomenologyCollection_Accessor;
  std::unique_ptr<StabilityCharacterizationType> stabilityAndOrientationAssessment_Accessor;
  std::unique_ptr<StructureAssessmentType> structureAssessment_Accessor;
  std::unique_ptr<IdentificationVerificationType> identificationVerification_Accessor;
  std::unique_ptr<SatelliteOperationsChangesCharacterizationType> operationsChanges_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_CHARACTERIZATIONOBJECTIVETYPE_H
