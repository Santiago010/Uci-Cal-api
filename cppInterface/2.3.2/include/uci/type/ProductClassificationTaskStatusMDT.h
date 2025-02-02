/** @file ProductClassificationTaskStatusMDT.h
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

#ifndef UCI_TYPE_PRODUCTCLASSIFICATIONTASKSTATUSMDT_H
#define UCI_TYPE_PRODUCTCLASSIFICATIONTASKSTATUSMDT_H

#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ProductClassificationStatusType.h"
#include "ProductManagementTaskStatusDataType.h"

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
class ProductClassificationTaskStatusMDT : public virtual ProductManagementTaskStatusDataType {
public:

  /** This method constructs a new ProductClassificationTaskStatusMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ProductClassificationTaskStatusMDT.
    */
  static UCI_EXPORT ProductClassificationTaskStatusMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ProductClassificationTaskStatusMDT initializing the data accessed by the new
    * ProductClassificationTaskStatusMDT using the data accessed by the specified ProductClassificationTaskStatusMDT
    * (cloning).
    *
    * @param accessor The ProductClassificationTaskStatusMDT that provides access to the data that is to be used to
    *      initialize the data accessed by the new created ProductClassificationTaskStatusMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ProductClassificationTaskStatusMDT.
    */
  static UCI_EXPORT ProductClassificationTaskStatusMDT& create(const ProductClassificationTaskStatusMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ProductClassificationTaskStatusMDT. Use of the specified accessor after it has
    * been destroyed will result in undefined behavior.
    *
    * @param accessor The ProductClassificationTaskStatusMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ProductClassificationTaskStatusMDT& accessor);

  /** Returns this accessor's type constant, i.e. productClassificationTaskStatusMDT.
    *
    * @return This accessor's type constant, i.e. productClassificationTaskStatusMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::productClassificationTaskStatusMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of ProductClassificationTaskStatusMDT.
    *
    * @return The version that was initialized from the uci:version attribute of ProductClassificationTaskStatusMDT.
    */
  static std::string getUCITypeVersion() {
    return "002.000.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ProductClassificationTaskStatusMDT& accessor) = 0;

  /** This element is used to provide more detailed status of requests that involve more than one product. [Occurrences:
    * Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::ProductClassificationStatusType, uci::type::accessorType::productClassificationStatusType> ProductClassificationStatus;

  /** Returns a const reference to the bounded list identified by ProductClassificationStatus.
    *
    * @return A const reference to the bounded list identified by ProductClassificationStatus.
    */
  virtual const uci::type::ProductClassificationTaskStatusMDT::ProductClassificationStatus& getProductClassificationStatus() const = 0;

  /** Returns a reference to the bounded list identified by ProductClassificationStatus.
    *
    * @return A reference to the bounded list identified by ProductClassificationStatus.
    */
  virtual uci::type::ProductClassificationTaskStatusMDT::ProductClassificationStatus& getProductClassificationStatus() = 0;

  /** Sets the bounded list identified by ProductClassificationStatus.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductClassificationTaskStatusMDT& setProductClassificationStatus(const uci::type::ProductClassificationTaskStatusMDT::ProductClassificationStatus& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ProductClassificationTaskStatusMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~ProductClassificationTaskStatusMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ProductClassificationTaskStatusMDT to copy from.
    */
  ProductClassificationTaskStatusMDT(const ProductClassificationTaskStatusMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ProductClassificationTaskStatusMDT to the contents of the
    * ProductClassificationTaskStatusMDT on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The ProductClassificationTaskStatusMDT on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this ProductClassificationTaskStatusMDT.
    * @return A reference to this ProductClassificationTaskStatusMDT.
    */
  ProductClassificationTaskStatusMDT& operator=(const ProductClassificationTaskStatusMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PRODUCTCLASSIFICATIONTASKSTATUSMDT_H

