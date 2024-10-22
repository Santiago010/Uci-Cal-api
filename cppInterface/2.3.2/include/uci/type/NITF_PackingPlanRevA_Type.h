/** @file NITF_PackingPlanRevA_Type.h
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

#ifndef UCI_TYPE_NITF_PACKINGPLANREVA_TYPE_H
#define UCI_TYPE_NITF_PACKINGPLANREVA_TYPE_H

#include "../base/export.h"
#include "ACFTB_RevA_Type.h"
#include "FileHeaderRevA_Type.h"
#include "ImageSubheaderRevA_Type.h"
#include "MSTGTA_RevA_Type.h"
#include "NITF_PackingPlanPET.h"

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

/** This is a revised NITF_PackingPlan rectifying the problems identified in NITF_PackingPlanType. It is a tailored
  * reproduction of data definitions included in NITF 2.1 as described in MIL-STD-2500C, MIL-STD-2500B Notice 2, and
  * companion appendices STDI-0002 Compendium Nov 2000 and IPON v1.0_01 August 2007. These data must flow from Task or
  * Command source to recipient so that the recipient can populate the resulting Products with this data to enable PED
  * and other functions. Under most circumstances, UCI doesn't reproduce other standards "in-band", in UCI messages. An
  * exception is made in this case because to do otherwise would disrupt C2 and PED. NOTES: 1) Annotations for these
  * fields specify where the source data can be obtained from an ACTDF message from AOC Cougar system. But note that
  * tasking can come in other forms such as target deck spreadsheets, email, chat, CMCC operator GUIs, etc. 2) The NITF
  * Basic Character Set - Alphanumeric (BCS-A) is all ASCII characters between SPACE and TILDE show as patterns herein as
  * "[ -~]", 2) The NITF Extended Character Set - Alphanumeric (ECS-A), is a subset of the Extended Character Set (ECS).
  * Valid ECS-A character codes range from 0x20 to 0x7E, and 0xA0 to 0xFF but Line Feed (0x0A), Form Feed (0x0C) and
  * Carriage Return (0x0D) are not valid ECS-A characters. This range is expressed herein in patterns as "[ -~ -ÿ]".
  * Because of inconsistencies between standards, it is strongly advised that character codes ranging from 0xA0 to 0xFF
  * should never be used. Therefore, the use of ECS-A characters should be restricted to its BCS-A Subset.
  */
class NITF_PackingPlanRevA_Type : public virtual NITF_PackingPlanPET {
public:

  /** This method constructs a new NITF_PackingPlanRevA_Type.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed NITF_PackingPlanRevA_Type.
    */
  static UCI_EXPORT NITF_PackingPlanRevA_Type& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new NITF_PackingPlanRevA_Type initializing the data accessed by the new
    * NITF_PackingPlanRevA_Type using the data accessed by the specified NITF_PackingPlanRevA_Type (cloning).
    *
    * @param accessor The NITF_PackingPlanRevA_Type that provides access to the data that is to be used to initialize the
    *      data accessed by the new created NITF_PackingPlanRevA_Type.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed NITF_PackingPlanRevA_Type.
    */
  static UCI_EXPORT NITF_PackingPlanRevA_Type& create(const NITF_PackingPlanRevA_Type& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified NITF_PackingPlanRevA_Type. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The NITF_PackingPlanRevA_Type that is to be destroyed.
    */
  static UCI_EXPORT void destroy(NITF_PackingPlanRevA_Type& accessor);

  /** Returns this accessor's type constant, i.e. nITF_PackingPlanRevA_Type.
    *
    * @return This accessor's type constant, i.e. nITF_PackingPlanRevA_Type.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::nITF_PackingPlanRevA_Type;
  }

  /** Returns the version that was initialized from the uci:version attribute of NITF_PackingPlanRevA_Type.
    *
    * @return The version that was initialized from the uci:version attribute of NITF_PackingPlanRevA_Type.
    */
  static std::string getUCITypeVersion() {
    return "001.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const NITF_PackingPlanRevA_Type& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by FileHeader.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by FileHeader.
    */
  virtual const uci::type::FileHeaderRevA_Type& getFileHeader() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by FileHeader.
    *
    * @return A reference to the accessor that provides access to the complex content identified by FileHeader.
    */
  virtual uci::type::FileHeaderRevA_Type& getFileHeader() = 0;

  /** Sets the complex content identified by FileHeader to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by FileHeader.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::NITF_PackingPlanRevA_Type& setFileHeader(const uci::type::FileHeaderRevA_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ImageSubheader.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ImageSubheader.
    */
  virtual const uci::type::ImageSubheaderRevA_Type& getImageSubheader() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ImageSubheader.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ImageSubheader.
    */
  virtual uci::type::ImageSubheaderRevA_Type& getImageSubheader() = 0;

  /** Sets the complex content identified by ImageSubheader to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ImageSubheader.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::NITF_PackingPlanRevA_Type& setImageSubheader(const uci::type::ImageSubheaderRevA_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ACFTB.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ACFTB.
    */
  virtual const uci::type::ACFTB_RevA_Type& getACFTB() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ACFTB.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ACFTB.
    */
  virtual uci::type::ACFTB_RevA_Type& getACFTB() = 0;

  /** Sets the complex content identified by ACFTB to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ACFTB.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::NITF_PackingPlanRevA_Type& setACFTB(const uci::type::ACFTB_RevA_Type& value) = 0;

  /** Returns whether the Element identified by ACFTB exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ACFTB is enabled or not.
    */
  virtual bool hasACFTB() const = 0;

  /** Enables the Element identified by ACFTB.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ACFTB.
    */
  virtual uci::type::ACFTB_RevA_Type& enableACFTB(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ACFTB.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::NITF_PackingPlanRevA_Type& clearACFTB() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by MSTGTA.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by MSTGTA.
    */
  virtual const uci::type::MSTGTA_RevA_Type& getMSTGTA() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by MSTGTA.
    *
    * @return A reference to the accessor that provides access to the complex content identified by MSTGTA.
    */
  virtual uci::type::MSTGTA_RevA_Type& getMSTGTA() = 0;

  /** Sets the complex content identified by MSTGTA to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by MSTGTA.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::NITF_PackingPlanRevA_Type& setMSTGTA(const uci::type::MSTGTA_RevA_Type& value) = 0;

  /** Returns whether the Element identified by MSTGTA exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by MSTGTA is enabled or not.
    */
  virtual bool hasMSTGTA() const = 0;

  /** Enables the Element identified by MSTGTA.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by MSTGTA.
    */
  virtual uci::type::MSTGTA_RevA_Type& enableMSTGTA(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by MSTGTA.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::NITF_PackingPlanRevA_Type& clearMSTGTA() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  NITF_PackingPlanRevA_Type() {
  }

  /** The destructor [only available to derived classes]. */
  ~NITF_PackingPlanRevA_Type() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The NITF_PackingPlanRevA_Type to copy from.
    */
  NITF_PackingPlanRevA_Type(const NITF_PackingPlanRevA_Type& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this NITF_PackingPlanRevA_Type to the contents of the
    * NITF_PackingPlanRevA_Type on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The NITF_PackingPlanRevA_Type on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this NITF_PackingPlanRevA_Type.
    * @return A reference to this NITF_PackingPlanRevA_Type.
    */
  NITF_PackingPlanRevA_Type& operator=(const NITF_PackingPlanRevA_Type& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_NITF_PACKINGPLANREVA_TYPE_H

