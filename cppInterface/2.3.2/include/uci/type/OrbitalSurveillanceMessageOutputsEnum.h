/** @file OrbitalSurveillanceMessageOutputsEnum.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:09 PM
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

#ifndef UCI_TYPE_ORBITALSURVEILLANCEMESSAGEOUTPUTSENUM_H
#define UCI_TYPE_ORBITALSURVEILLANCEMESSAGEOUTPUTSENUM_H

#include <map>
#include <sstream>

#include "../base/Accessor.h"
#include "../base/export.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** The enumeration of all message output types of Orbital Surveillance Capabilities. */
class OrbitalSurveillanceMessageOutputsEnum : public virtual uci::base::Accessor {
public:

  /** The following are the enumerated items that comprise this enumeration */
  enum EnumerationItem {

    /** Enumerated item that indicates that the enumeration has not been set */
    enumNotSet,

    /** Indicates dynamic status for the Capability will be reported via its associated Activity message. For example, the
      * OrbitalSurveillanceActivity message for an Orbital Surveillance Capability.
      */
    UCI_ORBITAL_SURVEILLANCE_ACTIVITY,

    /** Indicates results of the capability will be reported via the OBSERVATION_MEASUREMENT_REPORT message. */
    UCI_OBSERVATION_MEASUREMENT_REPORT,

    /** Indicates results of the capability will be reported via the ENTITY_NOTIFICATION message which provides a
      * notification related to an Entity (ex: ORBITAL_BREAKUP, KINEMATICS, ORBITAL_MANEUVER, MISSED_OBSERVATION, NEW).
      */
    UCI_ENTITY_NOTIFICATION,

    /** Indicates results of the capability will be reported via the EntityOrbitalElementSet message. */
    UCI_ENTITY_ORBITAL_ELEMENT_SET,

    /** Indicates results of the capability will be reported via the EntityOrbitalEphemeris message. */
    UCI_ENTITY_ORBITAL_EPHEMERIS,

    /** Indicates results of the capability will be reported via the EntityOrbitalVCM message. */
    UCI_ENTITY_ORBITAL_VCM,

    /** Indicates results of the capability will be reported via the Entity message. Systems that are able to also verify the
      * identity of an object could possibly only report the associated kinematics message with a reference to the Entity.
      */
    UCI_ENTITY,

    /** Indicates results of the capability will be reported via the EntityLost message. This output may be expected if a
      * system is unable to verify the identity of a specific target.
      */
    UCI_ENTITY_LOST,

    /** Indicates results of the capability will be reported via the EntityOrbitalCSO message. This output could result if a
      * series of determinations indicate that multiple resident space objects (RSO) are in close proximity to one another.
      */
    UCI_ENTITY_ORBITAL_CSO,

    /** Indicates results of the capability will be reported via the EntityOrbitalManeuver message. For instance, this output
      * could result when a system has custody of a resident space object (RSO) and observes a sudden change in the object's
      * orbit.
      */
    UCI_ENTITY_ORBITAL_MANEUVER,

    /** Indicates results of the Capability will be reported via products described by ProductMetadata and ProductLocation
      * messages.
      */
    UCI_PRODUCT_METADATA_LOCATION,

    /** Enumerated item that indicates maximum enumerated item exclusive of this item */
    enumMaxExclusive
  };

  /** Returns this accessor's type constant, i.e. orbitalSurveillanceMessageOutputsEnum.
    *
    * @return This accessor's type constant, i.e. orbitalSurveillanceMessageOutputsEnum.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::orbitalSurveillanceMessageOutputsEnum;
  }

  /** The assignment operator. Sets the contents of this OrbitalSurveillanceMessageOutputsEnum to the contents of the
    * OrbitalSurveillanceMessageOutputsEnum on the right hand side (rhs) of the assignment operator.
    *
    * @param rhs The OrbitalSurveillanceMessageOutputsEnum on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this OrbitalSurveillanceMessageOutputsEnum.
    * @return A reference to this OrbitalSurveillanceMessageOutputsEnum.
    */
  OrbitalSurveillanceMessageOutputsEnum& operator=(const OrbitalSurveillanceMessageOutputsEnum& rhs) {
    setValue(rhs.getValue());
    return *this;
  }

  /** The assignment operator that sets the value of this OrbitalSurveillanceMessageOutputsEnum enumeration to the
    * EnumerationItem on the right hand side of the assignment operator.
    *
    * @param rhs The EnumerationItem whose value is to be assigned to this OrbitalSurveillanceMessageOutputsEnum
    *      enumeration.
    * @return A reference to this OrbitalSurveillanceMessageOutputsEnum enumeration.
    */
  OrbitalSurveillanceMessageOutputsEnum& operator=(EnumerationItem rhs) {
    setValue(rhs);
    return *this;
  }

  /** Sets the value of this OrbitalSurveillanceMessageOutputsEnum enumeration to the value of the specified enumeration
    * item.
    *
    * @param item The EnumerationItem whose value is to be used to set the value of this
    *      OrbitalSurveillanceMessageOutputsEnum enumeration.
    */
  virtual void setValue(EnumerationItem item) = 0;

  /** Returns the value of this OrbitalSurveillanceMessageOutputsEnum enumeration.
    *
    * @param testForValidity=true Specifies whether this OrbitalSurveillanceMessageOutputsEnum enumeration should be
    *      validated (true) or not (false) as part of retrieving its value.
    * @return The value of this OrbitalSurveillanceMessageOutputsEnum enumeration.
    */
  virtual EnumerationItem getValue(bool testForValidity=true) const = 0;

  /** Returns the number of items in this OrbitalSurveillanceMessageOutputsEnum enumeration.
    *
    * @return The number of items in this OrbitalSurveillanceMessageOutputsEnum enumeration.
    */
  int getNumberOfItems() const noexception {
    return 11;
  }

  /** Returns whether this OrbitalSurveillanceMessageOutputsEnum enumeration is valid or not. A
    * OrbitalSurveillanceMessageOutputsEnum enumeration is valid if its value is one of the enumeration items other than
    * enumNotSet and enumMaxExclusive.
    *
    * @return A flag indicating whether this OrbitalSurveillanceMessageOutputsEnum enumeration is valid (true) or not
    *      (false).
    */
  virtual bool isValid() const noexception {
    return isValid(getValue(false));
  }

  /** Returns whether the specified enumeration item is valid or not. A enumeration item is valid if its value is one of
    * the enumeration items other than enumNotSet and enumMaxExclusive.
    *
    * @param item The EnumerationItem to test.
    * @return A flag indicating whether the specified EnumerationItem is valid (true) or not (false).
    */
  static bool isValid(EnumerationItem item) noexception {
    return (item > enumNotSet) && (item < enumMaxExclusive);
  }

  /** Returns whether the specified name item is valid or not. A name is valid if it is the name of one of the enumeration
    * items other than enumNotSet and enumMaxExclusive.
    *
    * @param name The name to test.
    * @return A flag indicating whether the specified name is valid (true) or not (false).
    */
  static bool isValid(const std::string& name) noexception {
    FromNameTable::const_iterator iter = m_fromNameTable.find(name);
    return !(iter == m_fromNameTable.end());
  }

  /** Tests whether the value of the OrbitalSurveillanceMessageOutputsEnum enumeration on the right hand side of the ==
    * operator is equal to the value as this OrbitalSurveillanceMessageOutputsEnum enumeration.
    *
    * @param rhs The OrbitalSurveillanceMessageOutputsEnum enumeration whose value is to be compared against the value of
    *      this OrbitalSurveillanceMessageOutputsEnum enumeration.
    * @return True if the value of the specified OrbitalSurveillanceMessageOutputsEnum enumeration (rhs) is equal to the
    *      value of this OrbitalSurveillanceMessageOutputsEnum enumeration, false otherwise.
    */
  bool operator==(const OrbitalSurveillanceMessageOutputsEnum& rhs) const {
    return getValue() == rhs.getValue();
  }

  /** Tests whether the value of the OrbitalSurveillanceMessageOutputsEnum enumeration on the right hand side of the !=
    * operator is not equal to the value as this OrbitalSurveillanceMessageOutputsEnum enumeration.
    *
    * @param rhs The OrbitalSurveillanceMessageOutputsEnum enumeration whose value is to be compared against the value of
    *      this OrbitalSurveillanceMessageOutputsEnum enumeration.
    * @return True if the value of the specified OrbitalSurveillanceMessageOutputsEnum enumeration (rhs) is not equal to
    *      the value of this OrbitalSurveillanceMessageOutputsEnum enumeration, false otherwise.
    */
  bool operator!=(const OrbitalSurveillanceMessageOutputsEnum& rhs) const {
    return getValue() != rhs.getValue();
  }

  /** Tests whether the value of the OrbitalSurveillanceMessageOutputsEnum enumeration on the right hand side of the <
    * operator is less than the value as this OrbitalSurveillanceMessageOutputsEnum enumeration.
    *
    * @param rhs The OrbitalSurveillanceMessageOutputsEnum enumeration whose value is to be compared against the value of
    *      this OrbitalSurveillanceMessageOutputsEnum enumeration.
    * @return True if the value of the specified OrbitalSurveillanceMessageOutputsEnum enumeration (rhs) is less than the
    *      value of this OrbitalSurveillanceMessageOutputsEnum enumeration, false otherwise.
    */
  bool operator<(const OrbitalSurveillanceMessageOutputsEnum& rhs) const {
    return getValue() < rhs.getValue();
  }

  /** Tests whether the value of the OrbitalSurveillanceMessageOutputsEnum enumeration on the right hand side of the <=
    * operator is less than or equal to the value as this OrbitalSurveillanceMessageOutputsEnum enumeration.
    *
    * @param rhs The OrbitalSurveillanceMessageOutputsEnum enumeration whose value is to be compared against the value of
    *      this OrbitalSurveillanceMessageOutputsEnum enumeration.
    * @return True if the value of the specified OrbitalSurveillanceMessageOutputsEnum enumeration (rhs) is less than or
    *      equal to the value of this OrbitalSurveillanceMessageOutputsEnum enumeration, false otherwise.
    */
  bool operator<=(const OrbitalSurveillanceMessageOutputsEnum& rhs) const {
    return getValue() <= rhs.getValue();
  }

  /** Tests whether the value of the OrbitalSurveillanceMessageOutputsEnum enumeration on the right hand side of the >
    * operator is greater than the value as this OrbitalSurveillanceMessageOutputsEnum enumeration.
    *
    * @param rhs The OrbitalSurveillanceMessageOutputsEnum enumeration whose value is to be compared against the value of
    *      this OrbitalSurveillanceMessageOutputsEnum enumeration.
    * @return True if the value of the specified OrbitalSurveillanceMessageOutputsEnum enumeration (rhs) is greater than
    *      the value of this OrbitalSurveillanceMessageOutputsEnum enumeration, false otherwise.
    */
  bool operator>(const OrbitalSurveillanceMessageOutputsEnum& rhs) const {
    return getValue() > rhs.getValue();
  }

  /** Tests whether the value of the OrbitalSurveillanceMessageOutputsEnum enumeration on the right hand side of the >=
    * operator is greater than or equal to the value as this OrbitalSurveillanceMessageOutputsEnum enumeration.
    *
    * @param rhs The OrbitalSurveillanceMessageOutputsEnum enumeration whose value is to be compared against the value of
    *      this OrbitalSurveillanceMessageOutputsEnum enumeration.
    * @return True if the value of the specified OrbitalSurveillanceMessageOutputsEnum enumeration (rhs) is greater than or
    *      equal to the value of this OrbitalSurveillanceMessageOutputsEnum enumeration, false otherwise.
    */
  bool operator>=(const OrbitalSurveillanceMessageOutputsEnum& rhs) const {
    return getValue() >= rhs.getValue();
  }

  /** Tests whether the value of this OrbitalSurveillanceMessageOutputsEnum enumeration is equal to the value of the
    * specified EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this
    *      OrbitalSurveillanceMessageOutputsEnum enumeration.
    * @return True if the value of the EnumerationItem (rhs) is equal to the value of this
    *      OrbitalSurveillanceMessageOutputsEnum enumeration, false otherwise.
    */
  bool operator==(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() == rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is equal to the value of the specified
    * OrbitalSurveillanceMessageOutputsEnum enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified
    *      OrbitalSurveillanceMessageOutputsEnum enumeration.
    * @param rhs The OrbitalSurveillanceMessageOutputsEnum enumeration whose value is to be compared against the value of
    *      the specified EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is equal to the value of the
    *      OrbitalSurveillanceMessageOutputsEnum enumeration (rhs), false otherwise.
    */
  friend bool operator==(EnumerationItem lhs, const OrbitalSurveillanceMessageOutputsEnum& rhs) {
    testForValidItem(lhs);
    return lhs == rhs.getValue();
  }

  /** Tests whether the value of this OrbitalSurveillanceMessageOutputsEnum enumeration is not equal to the value of the
    * specified EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this
    *      OrbitalSurveillanceMessageOutputsEnum enumeration.
    * @return True if the value of the EnumerationItem (rhs) is not equal to the value of this
    *      OrbitalSurveillanceMessageOutputsEnum enumeration, false otherwise.
    */
  bool operator!=(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() != rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is not equal to the value of the specified
    * OrbitalSurveillanceMessageOutputsEnum enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified
    *      OrbitalSurveillanceMessageOutputsEnum enumeration.
    * @param rhs The OrbitalSurveillanceMessageOutputsEnum enumeration whose value is to be compared against the value of
    *      the specified EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is not equal to the value of the
    *      OrbitalSurveillanceMessageOutputsEnum enumeration (rhs), false otherwise.
    */
  friend bool operator!=(EnumerationItem lhs, const OrbitalSurveillanceMessageOutputsEnum& rhs) {
    testForValidItem(lhs);
    return lhs != rhs.getValue();
  }

  /** Tests whether the value of this OrbitalSurveillanceMessageOutputsEnum enumeration is less than the value of the
    * specified EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this
    *      OrbitalSurveillanceMessageOutputsEnum enumeration.
    * @return True if the value of the EnumerationItem (rhs) is less than the value of this
    *      OrbitalSurveillanceMessageOutputsEnum enumeration, false otherwise.
    */
  bool operator<(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() < rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is less than the value of the specified
    * OrbitalSurveillanceMessageOutputsEnum enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified
    *      OrbitalSurveillanceMessageOutputsEnum enumeration.
    * @param rhs The OrbitalSurveillanceMessageOutputsEnum enumeration whose value is to be compared against the value of
    *      the specified EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is less than the value of the
    *      OrbitalSurveillanceMessageOutputsEnum enumeration (rhs), false otherwise.
    */
  friend bool operator<(EnumerationItem lhs, const OrbitalSurveillanceMessageOutputsEnum& rhs) {
    testForValidItem(lhs);
    return lhs < rhs.getValue();
  }

  /** Tests whether the value of this OrbitalSurveillanceMessageOutputsEnum enumeration is less than or equal to the value
    * of the specified EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this
    *      OrbitalSurveillanceMessageOutputsEnum enumeration.
    * @return True if the value of the EnumerationItem (rhs) is less than or equal to the value of this
    *      OrbitalSurveillanceMessageOutputsEnum enumeration, false otherwise.
    */
  bool operator<=(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() <= rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is less than or equal to the value of the specified
    * OrbitalSurveillanceMessageOutputsEnum enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified
    *      OrbitalSurveillanceMessageOutputsEnum enumeration.
    * @param rhs The OrbitalSurveillanceMessageOutputsEnum enumeration whose value is to be compared against the value of
    *      the specified EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is less than or equal to the value of the
    *      OrbitalSurveillanceMessageOutputsEnum enumeration (rhs), false otherwise.
    */
  friend bool operator<=(EnumerationItem lhs, const OrbitalSurveillanceMessageOutputsEnum& rhs) {
    testForValidItem(lhs);
    return lhs <= rhs.getValue();
  }

  /** Tests whether the value of this OrbitalSurveillanceMessageOutputsEnum enumeration is greater than the value of the
    * specified EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this
    *      OrbitalSurveillanceMessageOutputsEnum enumeration.
    * @return True if the value of the EnumerationItem (rhs) is greater than the value of this
    *      OrbitalSurveillanceMessageOutputsEnum enumeration, false otherwise.
    */
  bool operator>(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() > rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is greater than the value of the specified
    * OrbitalSurveillanceMessageOutputsEnum enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified
    *      OrbitalSurveillanceMessageOutputsEnum enumeration.
    * @param rhs The OrbitalSurveillanceMessageOutputsEnum enumeration whose value is to be compared against the value of
    *      the specified EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is greater than the value of the
    *      OrbitalSurveillanceMessageOutputsEnum enumeration (rhs), false otherwise.
    */
  friend bool operator>(EnumerationItem lhs, const OrbitalSurveillanceMessageOutputsEnum& rhs) {
    testForValidItem(lhs);
    return lhs > rhs.getValue();
  }

  /** Tests whether the value of this OrbitalSurveillanceMessageOutputsEnum enumeration is greater than or equal to the
    * value of the specified EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this
    *      OrbitalSurveillanceMessageOutputsEnum enumeration.
    * @return True if the value of the EnumerationItem (rhs) is greater than or equal to the value of this
    *      OrbitalSurveillanceMessageOutputsEnum enumeration, false otherwise.
    */
  bool operator>=(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() >= rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is greater than or equal to the value of the specified
    * OrbitalSurveillanceMessageOutputsEnum enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified
    *      OrbitalSurveillanceMessageOutputsEnum enumeration.
    * @param rhs The OrbitalSurveillanceMessageOutputsEnum enumeration whose value is to be compared against the value of
    *      the specified EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is greater than or equal to the value of the
    *      OrbitalSurveillanceMessageOutputsEnum enumeration (rhs), false otherwise.
    */
  friend bool operator>=(EnumerationItem lhs, const OrbitalSurveillanceMessageOutputsEnum& rhs) {
    testForValidItem(lhs);
    return lhs >= rhs.getValue();
  }

  /** Returns the name of the specified enumeration item.
    *
    * @param item The enumeration item whose name is to be returned.
    * @return The enumeration item's name if valid.
    */
  static std::string toName(EnumerationItem item) {
    ToNameTable::const_iterator iter = m_toNameTable.find(item);
    if (iter == m_toNameTable.end()) {
      std::ostringstream oStream;
      oStream << "Failed to convert enumerated item to its name, item not found in mapping: " << item;
      throw uci::base::UCIException(oStream.str(), 0);
    }

    return iter->second;
  }

  /** Returns the enumeration item having the specified name.
    *
    * @param itemName The name of the enumeration item to be returned.
    * @return The enumeration item having the specified name.
    */
  static EnumerationItem fromName(const std::string& itemName) {
    FromNameTable::const_iterator iter = m_fromNameTable.find(itemName);
    if (iter == m_fromNameTable.end()) {
      std::ostringstream oStream;
      oStream << "Failed to return enumerated item having specified name, name not found in mapping: " << itemName;
      throw uci::base::UCIException(oStream.str(), 0);
    }

    return iter->second;
  }

  /** Return the name of the enumeration item that the value of this OrbitalSurveillanceMessageOutputsEnum enumeration is
    * set to.
    *
    * @return The name of the enumeration item.
    */
  virtual std::string toName() const {
    return toName(getValue());
  }

  /** Sets the value of this OrbitalSurveillanceMessageOutputsEnum enumeration to the value of the enumeration item having
    * the specified name.
    *
    * @param itemName The name of the enumeration item whose value is to be used to set this
    *      OrbitalSurveillanceMessageOutputsEnum enumeration to.
    */
  virtual void setValueFromName(const std::string& itemName) {
    setValue(fromName(itemName));
  }

protected:

  /** The default constructor. In addition to constructing a new OrbitalSurveillanceMessageOutputsEnum, this constructor
    * also makes sure the conversion tables are initialized.
    */
  OrbitalSurveillanceMessageOutputsEnum() {
  }

  /** The destructor [only available to derived classes]. */
  ~OrbitalSurveillanceMessageOutputsEnum() {
  }

  /** Tests that the specified enumeration item is valid or not, throwing an exception if the item is not valid.
    *
    * @param additionalDescription An additional description to include in the error message should an exception be thrown.
    * @param item The enumeration item to test.
    */
  static void testForValidItem(const char* additionalDescription, EnumerationItem item) {
    if (!isValid(item)) {
      std::ostringstream oStream;
      oStream << additionalDescription << ": " << item << " (item must be between " << enumNotSet << " and "<< enumMaxExclusive << " exclusive)";
      throw uci::base::UCIException(oStream.str(), 0);
    }

  }

  /** Tests that the specified enumeration item is valid or not, throwing an exception if the item is not valid.
    *
    * @param item The enumeration item to test.
    */
  static void testForValidItem(EnumerationItem item) {
    testForValidItem("Invalid enumerated item specified", item);
  }

private:

  /** The type of table that is used to lookup the name of a enumeration item given that enumeration item. */
  typedef std::map<EnumerationItem, const std::string> ToNameTable;

  /** The type of table that is used to lookup an enumeration item given its name. */
  typedef std::map<const std::string, EnumerationItem> FromNameTable;

  /** The table that is used to lookup the name of a enumeration item given that enumeration item. */
  static UCI_EXPORT ToNameTable m_toNameTable;

  /** The type of table that is used to lookup an enumeration item given its name. */
  static UCI_EXPORT FromNameTable m_fromNameTable;

protected:

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The OrbitalSurveillanceMessageOutputsEnum to copy from.
    */
  OrbitalSurveillanceMessageOutputsEnum(const OrbitalSurveillanceMessageOutputsEnum& rhs) {
    (void)rhs;
  }

};

} // namespace type
} // namespace uci

template<typename charT, typename traits>
std::basic_ostream<charT, traits>&
operator<<(std::basic_ostream<charT, traits>& oStream, const uci::type::OrbitalSurveillanceMessageOutputsEnum& enumeration)
{
  oStream << enumeration.toName();
  return oStream;
}

#endif // UCI_TYPE_ORBITALSURVEILLANCEMESSAGEOUTPUTSENUM_H

