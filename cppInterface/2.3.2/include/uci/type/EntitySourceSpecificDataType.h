/** @file EntitySourceSpecificDataType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:07 PM
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

#ifndef UCI_TYPE_ENTITYSOURCESPECIFICDATATYPE_H
#define UCI_TYPE_ENTITYSOURCESPECIFICDATATYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ComparableRankingType.h"
#include "CorrelatedEntityID_Type.h"
#include "DropRestrictionType.h"
#include "EntityFusionEligibilityEnum.h"
#include "EntityID_Type.h"
#include "Link16_TrackQualityType.h"
#include "PassiveActiveEnum.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all base data types are declared */
namespace base {

class AbstractServiceBusConnection;

} // namespace base
} // namespace uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** See annotations in child elements and messages/elements that use this type for details. */
class EntitySourceSpecificDataType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new EntitySourceSpecificDataType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EntitySourceSpecificDataType.
    */
  static UCI_EXPORT EntitySourceSpecificDataType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new EntitySourceSpecificDataType initializing the data accessed by the new
    * EntitySourceSpecificDataType using the data accessed by the specified EntitySourceSpecificDataType (cloning).
    *
    * @param accessor The EntitySourceSpecificDataType that provides access to the data that is to be used to initialize
    *      the data accessed by the new created EntitySourceSpecificDataType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EntitySourceSpecificDataType.
    */
  static UCI_EXPORT EntitySourceSpecificDataType& create(const EntitySourceSpecificDataType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified EntitySourceSpecificDataType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The EntitySourceSpecificDataType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(EntitySourceSpecificDataType& accessor);

  /** Returns this accessor's type constant, i.e. entitySourceSpecificDataType.
    *
    * @return This accessor's type constant, i.e. entitySourceSpecificDataType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::entitySourceSpecificDataType;
  }

  /** Returns the version that was initialized from the uci:version attribute of EntitySourceSpecificDataType.
    *
    * @return The version that was initialized from the uci:version attribute of EntitySourceSpecificDataType.
    */
  static std::string getUCITypeVersion() {
    return "001.002.001.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const EntitySourceSpecificDataType& accessor) = 0;

  /** Indicates the unique ID of an Entity which is eligible for or excluded from future automated fusion operations with
    * the Entity represented by this Entity message. This element is required when the sibling FusionEligibility element
    * indicates SELECTIVE_EXCLUSION or SELECTIVE_INCLUSION and should be omitted otherwise. [Occurrences: Minimum: 0;
    * Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::CorrelatedEntityID_Type, uci::type::accessorType::correlatedEntityID_Type> CorrelatedEntityID;

  /** Indicates the drop restriction on an Entity. These restrictions can be applied by operator action or by other
    * services due to dependencies on other messages. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::DropRestrictionType, uci::type::accessorType::dropRestrictionType> DropRestriction;

  /** Indicates the unique ID of an Entity that for at least a singular point in time was kinematically uncertain with this
    * Entity. An example of this is when two vehicles come to a common intersection, stop, and then depart together.
    * Tracking algorithms have to make a decision on which track goes with which target and are not guaranteed to make the
    * correct decision unless there are outside sources (FBCB2, High Range Resolution Profiles, etc.) that allow the
    * tracker to either confirm the decision, or determine that a swap is necessary at a later time. At the time of the
    * intersection, the uncertainties of the tracks make them kinematically ambiguous so that information should be carried
    * on with the fused Entity. If the tracker makes the correct decision, than the other Entity will not be a
    * ContributorID, since it will have never contributed to the overall fused picture. Likewise, the Identity of the fused
    * Entity will not be modified since the other Entity never made a contribution. If the tracker makes an incorrect
    * decision than the other Entity will be a ContributorID and will possibly contribute to the Identity of the Fused
    * Entity. Regardless of the decision, the Ambiguous ID must be updated to reflect the ambiguous state that occurred.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::EntityID_Type, uci::type::accessorType::entityID_Type> AmbiguousEntityID;

  /** Returns a const reference to the value of the enumeration identified by FusionEligibility.
    *
    * @return A const reference to the value of the enumeration identified by FusionEligibility.
    */
  virtual const uci::type::EntityFusionEligibilityEnum& getFusionEligibility() const = 0;

  /** Returns a reference to the value of the enumeration identified by FusionEligibility.
    *
    * @return A reference to the value of the enumeration identified by FusionEligibility.
    */
  virtual uci::type::EntityFusionEligibilityEnum& getFusionEligibility() = 0;

  /** Sets the value of the enumeration identified by FusionEligibility.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntitySourceSpecificDataType& setFusionEligibility(const uci::type::EntityFusionEligibilityEnum& value) = 0;

  /** Sets the value of the enumeration identified by FusionEligibility.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntitySourceSpecificDataType& setFusionEligibility(uci::type::EntityFusionEligibilityEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by FusionEligibility exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by FusionEligibility is enabled or not.
    */
  virtual bool hasFusionEligibility() const = 0;

  /** Enables the Element identified by FusionEligibility.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by FusionEligibility.
    */
  virtual uci::type::EntityFusionEligibilityEnum& enableFusionEligibility(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by FusionEligibility.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntitySourceSpecificDataType& clearFusionEligibility() = 0;

  /** Returns a const reference to the bounded list identified by CorrelatedEntityID.
    *
    * @return A const reference to the bounded list identified by CorrelatedEntityID.
    */
  virtual const uci::type::EntitySourceSpecificDataType::CorrelatedEntityID& getCorrelatedEntityID() const = 0;

  /** Returns a reference to the bounded list identified by CorrelatedEntityID.
    *
    * @return A reference to the bounded list identified by CorrelatedEntityID.
    */
  virtual uci::type::EntitySourceSpecificDataType::CorrelatedEntityID& getCorrelatedEntityID() = 0;

  /** Sets the bounded list identified by CorrelatedEntityID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntitySourceSpecificDataType& setCorrelatedEntityID(const uci::type::EntitySourceSpecificDataType::CorrelatedEntityID& value) = 0;

  /** Returns a const reference to the bounded list identified by DropRestriction.
    *
    * @return A const reference to the bounded list identified by DropRestriction.
    */
  virtual const uci::type::EntitySourceSpecificDataType::DropRestriction& getDropRestriction() const = 0;

  /** Returns a reference to the bounded list identified by DropRestriction.
    *
    * @return A reference to the bounded list identified by DropRestriction.
    */
  virtual uci::type::EntitySourceSpecificDataType::DropRestriction& getDropRestriction() = 0;

  /** Sets the bounded list identified by DropRestriction.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntitySourceSpecificDataType& setDropRestriction(const uci::type::EntitySourceSpecificDataType::DropRestriction& value) = 0;

  /** Returns a const reference to the bounded list identified by AmbiguousEntityID.
    *
    * @return A const reference to the bounded list identified by AmbiguousEntityID.
    */
  virtual const uci::type::EntitySourceSpecificDataType::AmbiguousEntityID& getAmbiguousEntityID() const = 0;

  /** Returns a reference to the bounded list identified by AmbiguousEntityID.
    *
    * @return A reference to the bounded list identified by AmbiguousEntityID.
    */
  virtual uci::type::EntitySourceSpecificDataType::AmbiguousEntityID& getAmbiguousEntityID() = 0;

  /** Sets the bounded list identified by AmbiguousEntityID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntitySourceSpecificDataType& setAmbiguousEntityID(const uci::type::EntitySourceSpecificDataType::AmbiguousEntityID& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by TrackQuality.
    *
    * @return The value of the simple primitive data type identified by TrackQuality.
    */
  virtual uci::type::Link16_TrackQualityTypeValue getTrackQuality() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by TrackQuality.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntitySourceSpecificDataType& setTrackQuality(uci::type::Link16_TrackQualityTypeValue value) = 0;

  /** Returns whether the Element identified by TrackQuality exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by TrackQuality is enabled or not.
    */
  virtual bool hasTrackQuality() const = 0;

  /** Clears (disabled) the Element identified by TrackQuality.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntitySourceSpecificDataType& clearTrackQuality() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Priority.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Priority.
    */
  virtual const uci::type::ComparableRankingType& getPriority() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Priority.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Priority.
    */
  virtual uci::type::ComparableRankingType& getPriority() = 0;

  /** Sets the complex content identified by Priority to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Priority.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntitySourceSpecificDataType& setPriority(const uci::type::ComparableRankingType& value) = 0;

  /** Returns whether the Element identified by Priority exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Priority is enabled or not.
    */
  virtual bool hasPriority() const = 0;

  /** Enables the Element identified by Priority.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Priority.
    */
  virtual uci::type::ComparableRankingType& enablePriority(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Priority.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntitySourceSpecificDataType& clearPriority() = 0;

  /** Returns a const reference to the value of the enumeration identified by PassiveActiveIndicator.
    *
    * @return A const reference to the value of the enumeration identified by PassiveActiveIndicator.
    */
  virtual const uci::type::PassiveActiveEnum& getPassiveActiveIndicator() const = 0;

  /** Returns a reference to the value of the enumeration identified by PassiveActiveIndicator.
    *
    * @return A reference to the value of the enumeration identified by PassiveActiveIndicator.
    */
  virtual uci::type::PassiveActiveEnum& getPassiveActiveIndicator() = 0;

  /** Sets the value of the enumeration identified by PassiveActiveIndicator.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntitySourceSpecificDataType& setPassiveActiveIndicator(const uci::type::PassiveActiveEnum& value) = 0;

  /** Sets the value of the enumeration identified by PassiveActiveIndicator.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntitySourceSpecificDataType& setPassiveActiveIndicator(uci::type::PassiveActiveEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by PassiveActiveIndicator exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PassiveActiveIndicator is enabled or not.
    */
  virtual bool hasPassiveActiveIndicator() const = 0;

  /** Enables the Element identified by PassiveActiveIndicator.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by PassiveActiveIndicator.
    */
  virtual uci::type::PassiveActiveEnum& enablePassiveActiveIndicator(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by PassiveActiveIndicator.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntitySourceSpecificDataType& clearPassiveActiveIndicator() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  EntitySourceSpecificDataType() {
  }

  /** The destructor [only available to derived classes]. */
  ~EntitySourceSpecificDataType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The EntitySourceSpecificDataType to copy from.
    */
  EntitySourceSpecificDataType(const EntitySourceSpecificDataType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this EntitySourceSpecificDataType to the contents of the
    * EntitySourceSpecificDataType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The EntitySourceSpecificDataType on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this EntitySourceSpecificDataType.
    * @return A reference to this EntitySourceSpecificDataType.
    */
  EntitySourceSpecificDataType& operator=(const EntitySourceSpecificDataType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ENTITYSOURCESPECIFICDATATYPE_H

