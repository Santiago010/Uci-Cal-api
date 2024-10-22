/** @file ProductOutputType.h
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

#ifndef UCI_TYPE_PRODUCTOUTPUTTYPE_H
#define UCI_TYPE_PRODUCTOUTPUTTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "FileFormatType.h"
#include "ProcessingTypeEnum.h"
#include "ProductTypeEnum.h"

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
class ProductOutputType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new ProductOutputType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ProductOutputType.
    */
  static UCI_EXPORT ProductOutputType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ProductOutputType initializing the data accessed by the new ProductOutputType using the
    * data accessed by the specified ProductOutputType (cloning).
    *
    * @param accessor The ProductOutputType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created ProductOutputType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ProductOutputType.
    */
  static UCI_EXPORT ProductOutputType& create(const ProductOutputType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ProductOutputType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The ProductOutputType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ProductOutputType& accessor);

  /** Returns this accessor's type constant, i.e. productOutputType.
    *
    * @return This accessor's type constant, i.e. productOutputType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::productOutputType;
  }

  /** Returns the version that was initialized from the uci:version attribute of ProductOutputType.
    *
    * @return The version that was initialized from the uci:version attribute of ProductOutputType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.002.002";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ProductOutputType& accessor) = 0;

  /** Indicates the content (data, imagery or other information) of the Product. Multiple instances are allowed to support
    * fused Products with multiple types of content. See enumeration annotations for further details. List size for this
    * element is based on "Select All That Apply" condition. [Occurrences: Minimum: 1; Maximum: 81]
    */
  typedef uci::base::BoundedList<uci::type::ProductTypeEnum, uci::type::accessorType::productTypeEnum> ProductType;

  /** Describes the type of processing that has been done on the product associated with this ProductMetadata. List size
    * for this element is based on "Select All That Apply" condition. [Occurrences: Minimum: 0; Maximum: 32]
    */
  typedef uci::base::BoundedList<uci::type::ProcessingTypeEnum, uci::type::accessorType::processingTypeEnum> ProcessingType;

  /** Returns a const reference to the bounded list identified by ProductType.
    *
    * @return A const reference to the bounded list identified by ProductType.
    */
  virtual const uci::type::ProductOutputType::ProductType& getProductType() const = 0;

  /** Returns a reference to the bounded list identified by ProductType.
    *
    * @return A reference to the bounded list identified by ProductType.
    */
  virtual uci::type::ProductOutputType::ProductType& getProductType() = 0;

  /** Sets the bounded list identified by ProductType.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductOutputType& setProductType(const uci::type::ProductOutputType::ProductType& value) = 0;

  /** Returns a const reference to the bounded list identified by ProcessingType.
    *
    * @return A const reference to the bounded list identified by ProcessingType.
    */
  virtual const uci::type::ProductOutputType::ProcessingType& getProcessingType() const = 0;

  /** Returns a reference to the bounded list identified by ProcessingType.
    *
    * @return A reference to the bounded list identified by ProcessingType.
    */
  virtual uci::type::ProductOutputType::ProcessingType& getProcessingType() = 0;

  /** Sets the bounded list identified by ProcessingType.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductOutputType& setProcessingType(const uci::type::ProductOutputType::ProcessingType& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ProductFormat.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ProductFormat.
    */
  virtual const uci::type::FileFormatType& getProductFormat() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ProductFormat.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ProductFormat.
    */
  virtual uci::type::FileFormatType& getProductFormat() = 0;

  /** Sets the complex content identified by ProductFormat to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ProductFormat.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductOutputType& setProductFormat(const uci::type::FileFormatType& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ProductOutputType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ProductOutputType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ProductOutputType to copy from.
    */
  ProductOutputType(const ProductOutputType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ProductOutputType to the contents of the ProductOutputType on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The ProductOutputType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this ProductOutputType.
    * @return A reference to this ProductOutputType.
    */
  ProductOutputType& operator=(const ProductOutputType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PRODUCTOUTPUTTYPE_H

