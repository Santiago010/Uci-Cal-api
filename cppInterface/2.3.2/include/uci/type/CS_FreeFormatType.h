/** @file CS_FreeFormatType.h
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

#ifndef UCI_TYPE_CS_FREEFORMATTYPE_H
#define UCI_TYPE_CS_FREEFORMATTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "FileLocationID_Type.h"

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

/** This type represents background reference information for a CounterSpace capability. */
class CS_FreeFormatType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new CS_FreeFormatType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CS_FreeFormatType.
    */
  static UCI_EXPORT CS_FreeFormatType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new CS_FreeFormatType initializing the data accessed by the new CS_FreeFormatType using the
    * data accessed by the specified CS_FreeFormatType (cloning).
    *
    * @param accessor The CS_FreeFormatType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created CS_FreeFormatType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CS_FreeFormatType.
    */
  static UCI_EXPORT CS_FreeFormatType& create(const CS_FreeFormatType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified CS_FreeFormatType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The CS_FreeFormatType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(CS_FreeFormatType& accessor);

  /** Returns this accessor's type constant, i.e. cS_FreeFormatType.
    *
    * @return This accessor's type constant, i.e. cS_FreeFormatType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::cS_FreeFormatType;
  }

  /** Returns the version that was initialized from the uci:version attribute of CS_FreeFormatType.
    *
    * @return The version that was initialized from the uci:version attribute of CS_FreeFormatType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const CS_FreeFormatType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ThreatsID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ThreatsID.
    */
  virtual const uci::type::FileLocationID_Type& getThreatsID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ThreatsID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ThreatsID.
    */
  virtual uci::type::FileLocationID_Type& getThreatsID() = 0;

  /** Sets the complex content identified by ThreatsID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ThreatsID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_FreeFormatType& setThreatsID(const uci::type::FileLocationID_Type& value) = 0;

  /** Returns whether the Element identified by ThreatsID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ThreatsID is enabled or not.
    */
  virtual bool hasThreatsID() const = 0;

  /** Enables the Element identified by ThreatsID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ThreatsID.
    */
  virtual uci::type::FileLocationID_Type& enableThreatsID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ThreatsID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_FreeFormatType& clearThreatsID() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by DescriptionID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by DescriptionID.
    */
  virtual const uci::type::FileLocationID_Type& getDescriptionID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by DescriptionID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by DescriptionID.
    */
  virtual uci::type::FileLocationID_Type& getDescriptionID() = 0;

  /** Sets the complex content identified by DescriptionID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by DescriptionID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_FreeFormatType& setDescriptionID(const uci::type::FileLocationID_Type& value) = 0;

  /** Returns whether the Element identified by DescriptionID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by DescriptionID is enabled or not.
    */
  virtual bool hasDescriptionID() const = 0;

  /** Enables the Element identified by DescriptionID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by DescriptionID.
    */
  virtual uci::type::FileLocationID_Type& enableDescriptionID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by DescriptionID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_FreeFormatType& clearDescriptionID() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by PerformanceID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by PerformanceID.
    */
  virtual const uci::type::FileLocationID_Type& getPerformanceID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by PerformanceID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by PerformanceID.
    */
  virtual uci::type::FileLocationID_Type& getPerformanceID() = 0;

  /** Sets the complex content identified by PerformanceID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by PerformanceID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_FreeFormatType& setPerformanceID(const uci::type::FileLocationID_Type& value) = 0;

  /** Returns whether the Element identified by PerformanceID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PerformanceID is enabled or not.
    */
  virtual bool hasPerformanceID() const = 0;

  /** Enables the Element identified by PerformanceID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by PerformanceID.
    */
  virtual uci::type::FileLocationID_Type& enablePerformanceID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by PerformanceID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_FreeFormatType& clearPerformanceID() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by CommentsID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by CommentsID.
    */
  virtual const uci::type::FileLocationID_Type& getCommentsID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by CommentsID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by CommentsID.
    */
  virtual uci::type::FileLocationID_Type& getCommentsID() = 0;

  /** Sets the complex content identified by CommentsID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by CommentsID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_FreeFormatType& setCommentsID(const uci::type::FileLocationID_Type& value) = 0;

  /** Returns whether the Element identified by CommentsID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by CommentsID is enabled or not.
    */
  virtual bool hasCommentsID() const = 0;

  /** Enables the Element identified by CommentsID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by CommentsID.
    */
  virtual uci::type::FileLocationID_Type& enableCommentsID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by CommentsID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_FreeFormatType& clearCommentsID() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  CS_FreeFormatType() {
  }

  /** The destructor [only available to derived classes]. */
  ~CS_FreeFormatType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The CS_FreeFormatType to copy from.
    */
  CS_FreeFormatType(const CS_FreeFormatType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this CS_FreeFormatType to the contents of the CS_FreeFormatType on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The CS_FreeFormatType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this CS_FreeFormatType.
    * @return A reference to this CS_FreeFormatType.
    */
  CS_FreeFormatType& operator=(const CS_FreeFormatType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_CS_FREEFORMATTYPE_H

