/** @file STANAG_4607_PackingPlanRevA_Type.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:08 PM
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

#ifndef UCI_TYPE_STANAG_4607_PACKINGPLANREVA_TYPE_H
#define UCI_TYPE_STANAG_4607_PACKINGPLANREVA_TYPE_H

#include "../base/UnsignedByteAccessor.h"
#include "../base/UnsignedShortAccessor.h"
#include "../base/export.h"
#include "CharOrSpacePairsType.h"
#include "STANAG_4607_PacketSecurityClassificationType.h"
#include "STANAG_4607_PackingPlanPET.h"
#include "STANAG_4607_PlanType.h"
#include "VisibleString10Type.h"

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

/** Defines the fields required to be passed from the MTI tasking authority (ACTDF, ATO, target deck spreadsheet, email,
  * chat, whatever) to the platform for inclusion in its STANAG 4607 product. NOTE: This is an updated version of the
  * original STANAG_4607_PackingPlanType that addresses the problems described for that version herein.
  */
class STANAG_4607_PackingPlanRevA_Type : public virtual STANAG_4607_PackingPlanPET {
public:

  /** This method constructs a new STANAG_4607_PackingPlanRevA_Type.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed STANAG_4607_PackingPlanRevA_Type.
    */
  static UCI_EXPORT STANAG_4607_PackingPlanRevA_Type& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new STANAG_4607_PackingPlanRevA_Type initializing the data accessed by the new
    * STANAG_4607_PackingPlanRevA_Type using the data accessed by the specified STANAG_4607_PackingPlanRevA_Type (cloning).
    *
    * @param accessor The STANAG_4607_PackingPlanRevA_Type that provides access to the data that is to be used to
    *      initialize the data accessed by the new created STANAG_4607_PackingPlanRevA_Type.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed STANAG_4607_PackingPlanRevA_Type.
    */
  static UCI_EXPORT STANAG_4607_PackingPlanRevA_Type& create(const STANAG_4607_PackingPlanRevA_Type& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified STANAG_4607_PackingPlanRevA_Type. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The STANAG_4607_PackingPlanRevA_Type that is to be destroyed.
    */
  static UCI_EXPORT void destroy(STANAG_4607_PackingPlanRevA_Type& accessor);

  /** Returns this accessor's type constant, i.e. sTANAG_4607_PackingPlanRevA_Type.
    *
    * @return This accessor's type constant, i.e. sTANAG_4607_PackingPlanRevA_Type.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::sTANAG_4607_PackingPlanRevA_Type;
  }

  /** Returns the version that was initialized from the uci:version attribute of STANAG_4607_PackingPlanRevA_Type.
    *
    * @return The version that was initialized from the uci:version attribute of STANAG_4607_PackingPlanRevA_Type.
    */
  static std::string getUCITypeVersion() {
    return "000.001.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const STANAG_4607_PackingPlanRevA_Type& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by Nationality.
    *
    * @return A const reference to the accessor that provides access to the string identified by Nationality.
    */
  virtual const uci::type::CharOrSpacePairsType& getNationality() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by Nationality.
    *
    * @return A reference to the accessor that provides access to the string identified by Nationality.
    */
  virtual uci::type::CharOrSpacePairsType& getNationality() = 0;

  /** Sets the string identified by Nationality to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by Nationality.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& setNationality(const uci::type::CharOrSpacePairsType& value) = 0;

  /** Sets the string identified by Nationality to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& setNationality(const std::string& value) = 0;

  /** Sets the string identified by Nationality to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& setNationality(const char* value) = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by
    * PacketSecurityClassification.
    *
    * @return A const reference to the accessor that provides access to the string identified by
    *      PacketSecurityClassification.
    */
  virtual const uci::type::STANAG_4607_PacketSecurityClassificationType& getPacketSecurityClassification() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by PacketSecurityClassification.
    *
    * @return A reference to the accessor that provides access to the string identified by PacketSecurityClassification.
    */
  virtual uci::type::STANAG_4607_PacketSecurityClassificationType& getPacketSecurityClassification() = 0;

  /** Sets the string identified by PacketSecurityClassification to the contents of the string accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by PacketSecurityClassification.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& setPacketSecurityClassification(const uci::type::STANAG_4607_PacketSecurityClassificationType& value) = 0;

  /** Sets the string identified by PacketSecurityClassification to the contents of the string that is accessed by the
    * specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& setPacketSecurityClassification(const std::string& value) = 0;

  /** Sets the string identified by PacketSecurityClassification to the contents of the string that is accessed by the
    * specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& setPacketSecurityClassification(const char* value) = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by
    * PacketSecurityClassificationSystem.
    *
    * @return A const reference to the accessor that provides access to the string identified by
    *      PacketSecurityClassificationSystem.
    */
  virtual const uci::type::CharOrSpacePairsType& getPacketSecurityClassificationSystem() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by
    * PacketSecurityClassificationSystem.
    *
    * @return A reference to the accessor that provides access to the string identified by
    *      PacketSecurityClassificationSystem.
    */
  virtual uci::type::CharOrSpacePairsType& getPacketSecurityClassificationSystem() = 0;

  /** Sets the string identified by PacketSecurityClassificationSystem to the contents of the string accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by PacketSecurityClassificationSystem.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& setPacketSecurityClassificationSystem(const uci::type::CharOrSpacePairsType& value) = 0;

  /** Sets the string identified by PacketSecurityClassificationSystem to the contents of the string that is accessed by
    * the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& setPacketSecurityClassificationSystem(const std::string& value) = 0;

  /** Sets the string identified by PacketSecurityClassificationSystem to the contents of the string that is accessed by
    * the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& setPacketSecurityClassificationSystem(const char* value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by PacketSecurityCode.
    *
    * @return The value of the simple primitive data type identified by PacketSecurityCode.
    */
  virtual xs::UnsignedShort getPacketSecurityCode() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by PacketSecurityCode.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& setPacketSecurityCode(xs::UnsignedShort value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by ExerciseIndicator.
    *
    * @return The value of the simple primitive data type identified by ExerciseIndicator.
    */
  virtual xs::UnsignedByte getExerciseIndicator() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by ExerciseIndicator.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& setExerciseIndicator(xs::UnsignedByte value) = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by PlatformIdentifier.
    *
    * @return A const reference to the accessor that provides access to the string identified by PlatformIdentifier.
    */
  virtual const uci::type::VisibleString10Type& getPlatformIdentifier() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by PlatformIdentifier.
    *
    * @return A reference to the accessor that provides access to the string identified by PlatformIdentifier.
    */
  virtual uci::type::VisibleString10Type& getPlatformIdentifier() = 0;

  /** Sets the string identified by PlatformIdentifier to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by PlatformIdentifier.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& setPlatformIdentifier(const uci::type::VisibleString10Type& value) = 0;

  /** Sets the string identified by PlatformIdentifier to the contents of the string that is accessed by the specified
    * accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& setPlatformIdentifier(const std::string& value) = 0;

  /** Sets the string identified by PlatformIdentifier to the contents of the string that is accessed by the specified
    * accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& setPlatformIdentifier(const char* value) = 0;

  /** Returns whether the Element identified by PlatformIdentifier exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PlatformIdentifier is enabled or not.
    */
  virtual bool hasPlatformIdentifier() const = 0;

  /** Enables the Element identified by PlatformIdentifier.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by PlatformIdentifier.
    */
  virtual uci::type::VisibleString10Type& enablePlatformIdentifier(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by PlatformIdentifier.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& clearPlatformIdentifier() = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by MissionPlan.
    *
    * @return A const reference to the accessor that provides access to the string identified by MissionPlan.
    */
  virtual const uci::type::STANAG_4607_PlanType& getMissionPlan() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by MissionPlan.
    *
    * @return A reference to the accessor that provides access to the string identified by MissionPlan.
    */
  virtual uci::type::STANAG_4607_PlanType& getMissionPlan() = 0;

  /** Sets the string identified by MissionPlan to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by MissionPlan.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& setMissionPlan(const uci::type::STANAG_4607_PlanType& value) = 0;

  /** Sets the string identified by MissionPlan to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& setMissionPlan(const std::string& value) = 0;

  /** Sets the string identified by MissionPlan to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& setMissionPlan(const char* value) = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by FlightPlan.
    *
    * @return A const reference to the accessor that provides access to the string identified by FlightPlan.
    */
  virtual const uci::type::STANAG_4607_PlanType& getFlightPlan() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by FlightPlan.
    *
    * @return A reference to the accessor that provides access to the string identified by FlightPlan.
    */
  virtual uci::type::STANAG_4607_PlanType& getFlightPlan() = 0;

  /** Sets the string identified by FlightPlan to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by FlightPlan.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& setFlightPlan(const uci::type::STANAG_4607_PlanType& value) = 0;

  /** Sets the string identified by FlightPlan to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& setFlightPlan(const std::string& value) = 0;

  /** Sets the string identified by FlightPlan to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::STANAG_4607_PackingPlanRevA_Type& setFlightPlan(const char* value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  STANAG_4607_PackingPlanRevA_Type() {
  }

  /** The destructor [only available to derived classes]. */
  ~STANAG_4607_PackingPlanRevA_Type() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The STANAG_4607_PackingPlanRevA_Type to copy from.
    */
  STANAG_4607_PackingPlanRevA_Type(const STANAG_4607_PackingPlanRevA_Type& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this STANAG_4607_PackingPlanRevA_Type to the contents of the
    * STANAG_4607_PackingPlanRevA_Type on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The STANAG_4607_PackingPlanRevA_Type on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this STANAG_4607_PackingPlanRevA_Type.
    * @return A reference to this STANAG_4607_PackingPlanRevA_Type.
    */
  STANAG_4607_PackingPlanRevA_Type& operator=(const STANAG_4607_PackingPlanRevA_Type& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_STANAG_4607_PACKINGPLANREVA_TYPE_H

