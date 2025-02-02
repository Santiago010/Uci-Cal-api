/** @file ProductProcessingFunctionType.h
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

#ifndef UCI_TYPE_PRODUCTPROCESSINGFUNCTIONTYPE_H
#define UCI_TYPE_PRODUCTPROCESSINGFUNCTIONTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "AcceptedProductInformationType.h"
#include "FunctionID_Type.h"
#include "SupportedOutputType.h"
#include "SupportedProcessingType.h"
#include "SystemID_Type.h"

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
class ProductProcessingFunctionType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new ProductProcessingFunctionType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ProductProcessingFunctionType.
    */
  static UCI_EXPORT ProductProcessingFunctionType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ProductProcessingFunctionType initializing the data accessed by the new
    * ProductProcessingFunctionType using the data accessed by the specified ProductProcessingFunctionType (cloning).
    *
    * @param accessor The ProductProcessingFunctionType that provides access to the data that is to be used to initialize
    *      the data accessed by the new created ProductProcessingFunctionType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ProductProcessingFunctionType.
    */
  static UCI_EXPORT ProductProcessingFunctionType& create(const ProductProcessingFunctionType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ProductProcessingFunctionType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The ProductProcessingFunctionType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ProductProcessingFunctionType& accessor);

  /** Returns this accessor's type constant, i.e. productProcessingFunctionType.
    *
    * @return This accessor's type constant, i.e. productProcessingFunctionType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::productProcessingFunctionType;
  }

  /** Returns the version that was initialized from the uci:version attribute of ProductProcessingFunctionType.
    *
    * @return The version that was initialized from the uci:version attribute of ProductProcessingFunctionType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ProductProcessingFunctionType& accessor) = 0;

  /** Provides the accepted input products applicable to one or more sensor types. List size for this element allows for
    * the selection of all applicable values available in child element AcceptedSensorType. [Occurrences: Minimum: 1;
    * Maximum: 8]
    */
  typedef uci::base::BoundedList<uci::type::AcceptedProductInformationType, uci::type::accessorType::acceptedProductInformationType> AcceptedProductInformation;

  /** Provides the different output products that the Function can produce. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::SupportedOutputType, uci::type::accessorType::supportedOutputType> SupportedOutput;

  /** Returns a const reference to the accessor that provides access to the complex content identified by FunctionID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by FunctionID.
    */
  virtual const uci::type::FunctionID_Type& getFunctionID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by FunctionID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by FunctionID.
    */
  virtual uci::type::FunctionID_Type& getFunctionID() = 0;

  /** Sets the complex content identified by FunctionID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by FunctionID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingFunctionType& setFunctionID(const uci::type::FunctionID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by SystemID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by SystemID.
    */
  virtual const uci::type::SystemID_Type& getSystemID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SystemID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SystemID.
    */
  virtual uci::type::SystemID_Type& getSystemID() = 0;

  /** Sets the complex content identified by SystemID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SystemID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingFunctionType& setSystemID(const uci::type::SystemID_Type& value) = 0;

  /** Returns whether the Element identified by SystemID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by SystemID is enabled or not.
    */
  virtual bool hasSystemID() const = 0;

  /** Enables the Element identified by SystemID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by SystemID.
    */
  virtual uci::type::SystemID_Type& enableSystemID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by SystemID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingFunctionType& clearSystemID() = 0;

  /** Returns a const reference to the bounded list identified by AcceptedProductInformation.
    *
    * @return A const reference to the bounded list identified by AcceptedProductInformation.
    */
  virtual const uci::type::ProductProcessingFunctionType::AcceptedProductInformation& getAcceptedProductInformation() const = 0;

  /** Returns a reference to the bounded list identified by AcceptedProductInformation.
    *
    * @return A reference to the bounded list identified by AcceptedProductInformation.
    */
  virtual uci::type::ProductProcessingFunctionType::AcceptedProductInformation& getAcceptedProductInformation() = 0;

  /** Sets the bounded list identified by AcceptedProductInformation.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingFunctionType& setAcceptedProductInformation(const uci::type::ProductProcessingFunctionType::AcceptedProductInformation& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * SupportedProcessing.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      SupportedProcessing.
    */
  virtual const uci::type::SupportedProcessingType& getSupportedProcessing() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SupportedProcessing.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SupportedProcessing.
    */
  virtual uci::type::SupportedProcessingType& getSupportedProcessing() = 0;

  /** Sets the complex content identified by SupportedProcessing to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SupportedProcessing.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingFunctionType& setSupportedProcessing(const uci::type::SupportedProcessingType& value) = 0;

  /** Returns a const reference to the bounded list identified by SupportedOutput.
    *
    * @return A const reference to the bounded list identified by SupportedOutput.
    */
  virtual const uci::type::ProductProcessingFunctionType::SupportedOutput& getSupportedOutput() const = 0;

  /** Returns a reference to the bounded list identified by SupportedOutput.
    *
    * @return A reference to the bounded list identified by SupportedOutput.
    */
  virtual uci::type::ProductProcessingFunctionType::SupportedOutput& getSupportedOutput() = 0;

  /** Sets the bounded list identified by SupportedOutput.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingFunctionType& setSupportedOutput(const uci::type::ProductProcessingFunctionType::SupportedOutput& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ProductProcessingFunctionType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ProductProcessingFunctionType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ProductProcessingFunctionType to copy from.
    */
  ProductProcessingFunctionType(const ProductProcessingFunctionType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ProductProcessingFunctionType to the contents of the
    * ProductProcessingFunctionType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The ProductProcessingFunctionType on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this ProductProcessingFunctionType.
    * @return A reference to this ProductProcessingFunctionType.
    */
  ProductProcessingFunctionType& operator=(const ProductProcessingFunctionType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PRODUCTPROCESSINGFUNCTIONTYPE_H

