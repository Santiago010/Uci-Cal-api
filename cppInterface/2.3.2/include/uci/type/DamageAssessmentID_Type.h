/** @file DamageAssessmentID_Type.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:06 PM
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

#ifndef UCI_TYPE_DAMAGEASSESSMENTID_TYPE_H
#define UCI_TYPE_DAMAGEASSESSMENTID_TYPE_H

#include "../base/export.h"
#include "ID_Type.h"

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

/** The ID type for UCI IDs that correspond to damage assessments. */
class DamageAssessmentID_Type : public virtual ID_Type {
public:

  /** This method constructs a new DamageAssessmentID_Type.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DamageAssessmentID_Type.
    */
  static UCI_EXPORT DamageAssessmentID_Type& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new DamageAssessmentID_Type initializing the data accessed by the new
    * DamageAssessmentID_Type using the data accessed by the specified DamageAssessmentID_Type (cloning).
    *
    * @param accessor The DamageAssessmentID_Type that provides access to the data that is to be used to initialize the
    *      data accessed by the new created DamageAssessmentID_Type.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DamageAssessmentID_Type.
    */
  static UCI_EXPORT DamageAssessmentID_Type& create(const DamageAssessmentID_Type& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified DamageAssessmentID_Type. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The DamageAssessmentID_Type that is to be destroyed.
    */
  static UCI_EXPORT void destroy(DamageAssessmentID_Type& accessor);

  /** Returns this accessor's type constant, i.e. damageAssessmentID_Type.
    *
    * @return This accessor's type constant, i.e. damageAssessmentID_Type.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::damageAssessmentID_Type;
  }

  /** Returns the version that was initialized from the uci:version attribute of DamageAssessmentID_Type.
    *
    * @return The version that was initialized from the uci:version attribute of DamageAssessmentID_Type.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const DamageAssessmentID_Type& accessor) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  DamageAssessmentID_Type() {
  }

  /** The destructor [only available to derived classes]. */
  ~DamageAssessmentID_Type() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The DamageAssessmentID_Type to copy from.
    */
  DamageAssessmentID_Type(const DamageAssessmentID_Type& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this DamageAssessmentID_Type to the contents of the
    * DamageAssessmentID_Type on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The DamageAssessmentID_Type on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this DamageAssessmentID_Type.
    * @return A reference to this DamageAssessmentID_Type.
    */
  DamageAssessmentID_Type& operator=(const DamageAssessmentID_Type& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_DAMAGEASSESSMENTID_TYPE_H

