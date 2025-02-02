/** @file DerivedTypesCreator4.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:16 PM
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

#include "asb_uci/util/DerivedTypesCreator4.h"

#include <boost/smart_ptr/make_unique.hpp>

#include "asb_uci/type/CommPTW_CommWaveformActivityCommandType.h"
#include "asb_uci/type/CommPTW_CommWaveformActivityType.h"
#include "asb_uci/type/CommPTW_CommWaveformCapabilityCommandType.h"
#include "asb_uci/type/CommPointingCommandStatusMDT.h"
#include "asb_uci/type/CommPointingCommandStatusMT.h"
#include "asb_uci/type/CommPointingID_Type.h"
#include "asb_uci/type/CommPointingMT.h"
#include "asb_uci/type/CommPointingRequestMDT.h"
#include "asb_uci/type/CommPointingRequestMT.h"
#include "asb_uci/type/CommPointingRequestStatusMDT.h"
#include "asb_uci/type/CommPointingRequestStatusMT.h"
#include "asb_uci/type/CommProfileID_Type.h"
#include "asb_uci/type/CommRelayActivityMT.h"
#include "asb_uci/type/CommRelayActivityType.h"
#include "asb_uci/type/CommRelayCapabilityCommandType.h"
#include "asb_uci/type/CommRelayCapabilityMDT.h"
#include "asb_uci/type/CommRelayCapabilityMT.h"
#include "asb_uci/type/CommRelayCapabilityStatusMDT.h"
#include "asb_uci/type/CommRelayCapabilityStatusMT.h"
#include "asb_uci/type/CommRelayCapabilityType.h"
#include "asb_uci/type/CommRelayCommandMT.h"
#include "asb_uci/type/CommRelayCommandStatusMDT.h"
#include "asb_uci/type/CommRelayCommandStatusMT.h"
#include "asb_uci/type/CommRelaySettingsCommandMDT.h"
#include "asb_uci/type/CommRelaySettingsCommandMT.h"
#include "asb_uci/type/CommRelaySettingsCommandStatusMDT.h"
#include "asb_uci/type/CommRelaySettingsCommandStatusMT.h"
#include "asb_uci/type/CommRelayTaskBaseType.h"
#include "asb_uci/type/CommRelayTaskType.h"
#include "asb_uci/type/CommSINCGARS_CommWaveformActivityCommandType.h"
#include "asb_uci/type/CommSINCGARS_CommWaveformActivityType.h"
#include "asb_uci/type/CommSINCGARS_CommWaveformCapabilityCommandType.h"
#include "asb_uci/type/CommScheduleAllocationID_Type.h"
#include "asb_uci/type/CommScheduleAllocationMT.h"
#include "asb_uci/type/CommScheduleAllocationUpdateRequestMDT.h"
#include "asb_uci/type/CommScheduleAllocationUpdateRequestMT.h"
#include "asb_uci/type/CommScheduleAllocationUpdateRequestStatusMDT.h"
#include "asb_uci/type/CommScheduleAllocationUpdateRequestStatusMT.h"
#include "asb_uci/type/CommScheduleAvailabilityID_Type.h"
#include "asb_uci/type/CommScheduleAvailabilityMT.h"
#include "asb_uci/type/CommSchedulingRequestMDT.h"
#include "asb_uci/type/CommSchedulingRequestMT.h"
#include "asb_uci/type/CommSchedulingRequestStatusMDT.h"
#include "asb_uci/type/CommSchedulingRequestStatusMT.h"
#include "asb_uci/type/CommSchedulingRequirementID_Type.h"
#include "asb_uci/type/CommSchedulingRequirementMT.h"
#include "asb_uci/type/CommStarlinkCommWaveformActivityCommandType.h"
#include "asb_uci/type/CommStarlinkCommWaveformActivityType.h"
#include "asb_uci/type/CommStarlinkCommWaveformCapabilityCommandType.h"
#include "asb_uci/type/CommSystemID_Type.h"
#include "asb_uci/type/CommSystemMT.h"
#include "asb_uci/type/CommTerminalActivityCommandType.h"
#include "asb_uci/type/CommTerminalActivityMT.h"
#include "asb_uci/type/CommTerminalActivityType.h"
#include "asb_uci/type/CommTerminalCapabilityCommandType.h"
#include "asb_uci/type/CommTerminalCapabilityMDT.h"
#include "asb_uci/type/CommTerminalCapabilityMT.h"
#include "asb_uci/type/CommTerminalCapabilityStatusMDT.h"
#include "asb_uci/type/CommTerminalCapabilityStatusMT.h"
#include "asb_uci/type/CommTerminalCapabilityStatusType.h"
#include "asb_uci/type/CommTerminalCapabilityType.h"
#include "asb_uci/type/CommTerminalCommandMT.h"
#include "asb_uci/type/CommTerminalCommandStatusMDT.h"
#include "asb_uci/type/CommTerminalCommandStatusMT.h"
#include "asb_uci/type/CommTerminalPlanActivationCommandMDT.h"
#include "asb_uci/type/CommTerminalPlanActivationCommandMT.h"
#include "asb_uci/type/CommTerminalPlanActivationCommandStatusMDT.h"
#include "asb_uci/type/CommTerminalPlanActivationCommandStatusMT.h"
#include "asb_uci/type/CommTerminalPlanActivationStatusMT.h"
#include "asb_uci/type/CommTerminalPlanID_Type.h"
#include "asb_uci/type/CommTerminalPlanMT.h"
#include "asb_uci/type/CommTerminalPlanOverrideRequestMT.h"
#include "asb_uci/type/CommTerminalPlanOverrideRequestStatusMDT.h"
#include "asb_uci/type/CommTerminalPlanOverrideRequestStatusMT.h"
#include "asb_uci/type/CommTerminalPlanOverrideRequestType.h"
#include "asb_uci/type/CommTerminalSettingsCommandMDT.h"
#include "asb_uci/type/CommTerminalSettingsCommandMT.h"
#include "asb_uci/type/CommTerminalSettingsCommandStatusMDT.h"
#include "asb_uci/type/CommTerminalSettingsCommandStatusMT.h"
#include "asb_uci/type/CommUHF_SATCOM_CommWaveformActivityCommandType.h"
#include "asb_uci/type/CommUHF_SATCOM_CommWaveformActivityType.h"
#include "asb_uci/type/CommUHF_SATCOM_CommWaveformCapabilityCommandType.h"
#include "asb_uci/type/CommUserIO_ID_Type.h"
#include "asb_uci/type/CommUserLinkID_Type.h"
#include "asb_uci/type/CommUtilizationRequestMDT.h"
#include "asb_uci/type/CommUtilizationRequestMT.h"
#include "asb_uci/type/CommUtilizationRequestStatusMDT.h"
#include "asb_uci/type/CommUtilizationRequestStatusMT.h"
#include "asb_uci/type/CommWaveformActivityCommandPET.h"
#include "asb_uci/type/CommWaveformActivityPET.h"
#include "asb_uci/type/CommWaveformCapabilityCommandPET.h"
#include "asb_uci/type/CompletedRequirementMetricsType.h"
#include "asb_uci/type/ComponentConfigurationDataRequestMDT.h"
#include "asb_uci/type/ComponentConfigurationDataRequestMT.h"
#include "asb_uci/type/ComponentConfigurationDataRequestStatusMDT.h"
#include "asb_uci/type/ComponentConfigurationDataRequestStatusMT.h"
#include "asb_uci/type/ComponentConfigurationID_Type.h"
#include "asb_uci/type/ComponentConfigurationMT.h"
#include "asb_uci/type/ComponentConfigurationPET.h"
#include "asb_uci/type/ComponentConfigurationTreeType.h"
#include "uci/base/Accessor.h"
#include "uci/base/accessorType.h"

/**  */
namespace asb_uci {

/**  */
namespace util {

uci::base::Accessor* DerivedTypesCreator4::create(const uci::base::accessorType::AccessorType type) {
  switch (type) {
    case uci::type::accessorType::commPointingCommandStatusMDT:
      return boost::make_unique<asb_uci::type::CommPointingCommandStatusMDT>().release();
    case uci::type::accessorType::commPointingCommandStatusMT:
      return boost::make_unique<asb_uci::type::CommPointingCommandStatusMT>().release();
    case uci::type::accessorType::commPointingID_Type:
      return boost::make_unique<asb_uci::type::CommPointingID_Type>().release();
    case uci::type::accessorType::commPointingMT:
      return boost::make_unique<asb_uci::type::CommPointingMT>().release();
    case uci::type::accessorType::commPointingRequestMDT:
      return boost::make_unique<asb_uci::type::CommPointingRequestMDT>().release();
    case uci::type::accessorType::commPointingRequestMT:
      return boost::make_unique<asb_uci::type::CommPointingRequestMT>().release();
    case uci::type::accessorType::commPointingRequestStatusMDT:
      return boost::make_unique<asb_uci::type::CommPointingRequestStatusMDT>().release();
    case uci::type::accessorType::commPointingRequestStatusMT:
      return boost::make_unique<asb_uci::type::CommPointingRequestStatusMT>().release();
    case uci::type::accessorType::commProfileID_Type:
      return boost::make_unique<asb_uci::type::CommProfileID_Type>().release();
    case uci::type::accessorType::commPTW_CommWaveformActivityCommandType:
      return boost::make_unique<asb_uci::type::CommPTW_CommWaveformActivityCommandType>().release();
    case uci::type::accessorType::commPTW_CommWaveformActivityType:
      return boost::make_unique<asb_uci::type::CommPTW_CommWaveformActivityType>().release();
    case uci::type::accessorType::commPTW_CommWaveformCapabilityCommandType:
      return boost::make_unique<asb_uci::type::CommPTW_CommWaveformCapabilityCommandType>().release();
    case uci::type::accessorType::commRelayActivityMT:
      return boost::make_unique<asb_uci::type::CommRelayActivityMT>().release();
    case uci::type::accessorType::commRelayActivityType:
      return boost::make_unique<asb_uci::type::CommRelayActivityType>().release();
    case uci::type::accessorType::commRelayCapabilityCommandType:
      return boost::make_unique<asb_uci::type::CommRelayCapabilityCommandType>().release();
    case uci::type::accessorType::commRelayCapabilityMDT:
      return boost::make_unique<asb_uci::type::CommRelayCapabilityMDT>().release();
    case uci::type::accessorType::commRelayCapabilityMT:
      return boost::make_unique<asb_uci::type::CommRelayCapabilityMT>().release();
    case uci::type::accessorType::commRelayCapabilityStatusMDT:
      return boost::make_unique<asb_uci::type::CommRelayCapabilityStatusMDT>().release();
    case uci::type::accessorType::commRelayCapabilityStatusMT:
      return boost::make_unique<asb_uci::type::CommRelayCapabilityStatusMT>().release();
    case uci::type::accessorType::commRelayCapabilityType:
      return boost::make_unique<asb_uci::type::CommRelayCapabilityType>().release();
    case uci::type::accessorType::commRelayCommandMT:
      return boost::make_unique<asb_uci::type::CommRelayCommandMT>().release();
    case uci::type::accessorType::commRelayCommandStatusMDT:
      return boost::make_unique<asb_uci::type::CommRelayCommandStatusMDT>().release();
    case uci::type::accessorType::commRelayCommandStatusMT:
      return boost::make_unique<asb_uci::type::CommRelayCommandStatusMT>().release();
    case uci::type::accessorType::commRelaySettingsCommandMDT:
      return boost::make_unique<asb_uci::type::CommRelaySettingsCommandMDT>().release();
    case uci::type::accessorType::commRelaySettingsCommandMT:
      return boost::make_unique<asb_uci::type::CommRelaySettingsCommandMT>().release();
    case uci::type::accessorType::commRelaySettingsCommandStatusMDT:
      return boost::make_unique<asb_uci::type::CommRelaySettingsCommandStatusMDT>().release();
    case uci::type::accessorType::commRelaySettingsCommandStatusMT:
      return boost::make_unique<asb_uci::type::CommRelaySettingsCommandStatusMT>().release();
    case uci::type::accessorType::commRelayTaskBaseType:
      return boost::make_unique<asb_uci::type::CommRelayTaskBaseType>().release();
    case uci::type::accessorType::commRelayTaskType:
      return boost::make_unique<asb_uci::type::CommRelayTaskType>().release();
    case uci::type::accessorType::commScheduleAllocationID_Type:
      return boost::make_unique<asb_uci::type::CommScheduleAllocationID_Type>().release();
    case uci::type::accessorType::commScheduleAllocationMT:
      return boost::make_unique<asb_uci::type::CommScheduleAllocationMT>().release();
    case uci::type::accessorType::commScheduleAllocationUpdateRequestMDT:
      return boost::make_unique<asb_uci::type::CommScheduleAllocationUpdateRequestMDT>().release();
    case uci::type::accessorType::commScheduleAllocationUpdateRequestMT:
      return boost::make_unique<asb_uci::type::CommScheduleAllocationUpdateRequestMT>().release();
    case uci::type::accessorType::commScheduleAllocationUpdateRequestStatusMDT:
      return boost::make_unique<asb_uci::type::CommScheduleAllocationUpdateRequestStatusMDT>().release();
    case uci::type::accessorType::commScheduleAllocationUpdateRequestStatusMT:
      return boost::make_unique<asb_uci::type::CommScheduleAllocationUpdateRequestStatusMT>().release();
    case uci::type::accessorType::commScheduleAvailabilityID_Type:
      return boost::make_unique<asb_uci::type::CommScheduleAvailabilityID_Type>().release();
    case uci::type::accessorType::commScheduleAvailabilityMT:
      return boost::make_unique<asb_uci::type::CommScheduleAvailabilityMT>().release();
    case uci::type::accessorType::commSchedulingRequestMDT:
      return boost::make_unique<asb_uci::type::CommSchedulingRequestMDT>().release();
    case uci::type::accessorType::commSchedulingRequestMT:
      return boost::make_unique<asb_uci::type::CommSchedulingRequestMT>().release();
    case uci::type::accessorType::commSchedulingRequestStatusMDT:
      return boost::make_unique<asb_uci::type::CommSchedulingRequestStatusMDT>().release();
    case uci::type::accessorType::commSchedulingRequestStatusMT:
      return boost::make_unique<asb_uci::type::CommSchedulingRequestStatusMT>().release();
    case uci::type::accessorType::commSchedulingRequirementID_Type:
      return boost::make_unique<asb_uci::type::CommSchedulingRequirementID_Type>().release();
    case uci::type::accessorType::commSchedulingRequirementMT:
      return boost::make_unique<asb_uci::type::CommSchedulingRequirementMT>().release();
    case uci::type::accessorType::commSINCGARS_CommWaveformActivityCommandType:
      return boost::make_unique<asb_uci::type::CommSINCGARS_CommWaveformActivityCommandType>().release();
    case uci::type::accessorType::commSINCGARS_CommWaveformActivityType:
      return boost::make_unique<asb_uci::type::CommSINCGARS_CommWaveformActivityType>().release();
    case uci::type::accessorType::commSINCGARS_CommWaveformCapabilityCommandType:
      return boost::make_unique<asb_uci::type::CommSINCGARS_CommWaveformCapabilityCommandType>().release();
    case uci::type::accessorType::commStarlinkCommWaveformActivityCommandType:
      return boost::make_unique<asb_uci::type::CommStarlinkCommWaveformActivityCommandType>().release();
    case uci::type::accessorType::commStarlinkCommWaveformActivityType:
      return boost::make_unique<asb_uci::type::CommStarlinkCommWaveformActivityType>().release();
    case uci::type::accessorType::commStarlinkCommWaveformCapabilityCommandType:
      return boost::make_unique<asb_uci::type::CommStarlinkCommWaveformCapabilityCommandType>().release();
    case uci::type::accessorType::commSystemID_Type:
      return boost::make_unique<asb_uci::type::CommSystemID_Type>().release();
    case uci::type::accessorType::commSystemMT:
      return boost::make_unique<asb_uci::type::CommSystemMT>().release();
    case uci::type::accessorType::commTerminalActivityCommandType:
      return boost::make_unique<asb_uci::type::CommTerminalActivityCommandType>().release();
    case uci::type::accessorType::commTerminalActivityMT:
      return boost::make_unique<asb_uci::type::CommTerminalActivityMT>().release();
    case uci::type::accessorType::commTerminalActivityType:
      return boost::make_unique<asb_uci::type::CommTerminalActivityType>().release();
    case uci::type::accessorType::commTerminalCapabilityCommandType:
      return boost::make_unique<asb_uci::type::CommTerminalCapabilityCommandType>().release();
    case uci::type::accessorType::commTerminalCapabilityMDT:
      return boost::make_unique<asb_uci::type::CommTerminalCapabilityMDT>().release();
    case uci::type::accessorType::commTerminalCapabilityMT:
      return boost::make_unique<asb_uci::type::CommTerminalCapabilityMT>().release();
    case uci::type::accessorType::commTerminalCapabilityStatusMDT:
      return boost::make_unique<asb_uci::type::CommTerminalCapabilityStatusMDT>().release();
    case uci::type::accessorType::commTerminalCapabilityStatusMT:
      return boost::make_unique<asb_uci::type::CommTerminalCapabilityStatusMT>().release();
    case uci::type::accessorType::commTerminalCapabilityStatusType:
      return boost::make_unique<asb_uci::type::CommTerminalCapabilityStatusType>().release();
    case uci::type::accessorType::commTerminalCapabilityType:
      return boost::make_unique<asb_uci::type::CommTerminalCapabilityType>().release();
    case uci::type::accessorType::commTerminalCommandMT:
      return boost::make_unique<asb_uci::type::CommTerminalCommandMT>().release();
    case uci::type::accessorType::commTerminalCommandStatusMDT:
      return boost::make_unique<asb_uci::type::CommTerminalCommandStatusMDT>().release();
    case uci::type::accessorType::commTerminalCommandStatusMT:
      return boost::make_unique<asb_uci::type::CommTerminalCommandStatusMT>().release();
    case uci::type::accessorType::commTerminalPlanActivationCommandMDT:
      return boost::make_unique<asb_uci::type::CommTerminalPlanActivationCommandMDT>().release();
    case uci::type::accessorType::commTerminalPlanActivationCommandMT:
      return boost::make_unique<asb_uci::type::CommTerminalPlanActivationCommandMT>().release();
    case uci::type::accessorType::commTerminalPlanActivationCommandStatusMDT:
      return boost::make_unique<asb_uci::type::CommTerminalPlanActivationCommandStatusMDT>().release();
    case uci::type::accessorType::commTerminalPlanActivationCommandStatusMT:
      return boost::make_unique<asb_uci::type::CommTerminalPlanActivationCommandStatusMT>().release();
    case uci::type::accessorType::commTerminalPlanActivationStatusMT:
      return boost::make_unique<asb_uci::type::CommTerminalPlanActivationStatusMT>().release();
    case uci::type::accessorType::commTerminalPlanID_Type:
      return boost::make_unique<asb_uci::type::CommTerminalPlanID_Type>().release();
    case uci::type::accessorType::commTerminalPlanMT:
      return boost::make_unique<asb_uci::type::CommTerminalPlanMT>().release();
    case uci::type::accessorType::commTerminalPlanOverrideRequestMT:
      return boost::make_unique<asb_uci::type::CommTerminalPlanOverrideRequestMT>().release();
    case uci::type::accessorType::commTerminalPlanOverrideRequestStatusMDT:
      return boost::make_unique<asb_uci::type::CommTerminalPlanOverrideRequestStatusMDT>().release();
    case uci::type::accessorType::commTerminalPlanOverrideRequestStatusMT:
      return boost::make_unique<asb_uci::type::CommTerminalPlanOverrideRequestStatusMT>().release();
    case uci::type::accessorType::commTerminalPlanOverrideRequestType:
      return boost::make_unique<asb_uci::type::CommTerminalPlanOverrideRequestType>().release();
    case uci::type::accessorType::commTerminalSettingsCommandMDT:
      return boost::make_unique<asb_uci::type::CommTerminalSettingsCommandMDT>().release();
    case uci::type::accessorType::commTerminalSettingsCommandMT:
      return boost::make_unique<asb_uci::type::CommTerminalSettingsCommandMT>().release();
    case uci::type::accessorType::commTerminalSettingsCommandStatusMDT:
      return boost::make_unique<asb_uci::type::CommTerminalSettingsCommandStatusMDT>().release();
    case uci::type::accessorType::commTerminalSettingsCommandStatusMT:
      return boost::make_unique<asb_uci::type::CommTerminalSettingsCommandStatusMT>().release();
    case uci::type::accessorType::commUHF_SATCOM_CommWaveformActivityCommandType:
      return boost::make_unique<asb_uci::type::CommUHF_SATCOM_CommWaveformActivityCommandType>().release();
    case uci::type::accessorType::commUHF_SATCOM_CommWaveformActivityType:
      return boost::make_unique<asb_uci::type::CommUHF_SATCOM_CommWaveformActivityType>().release();
    case uci::type::accessorType::commUHF_SATCOM_CommWaveformCapabilityCommandType:
      return boost::make_unique<asb_uci::type::CommUHF_SATCOM_CommWaveformCapabilityCommandType>().release();
    case uci::type::accessorType::commUserIO_ID_Type:
      return boost::make_unique<asb_uci::type::CommUserIO_ID_Type>().release();
    case uci::type::accessorType::commUserLinkID_Type:
      return boost::make_unique<asb_uci::type::CommUserLinkID_Type>().release();
    case uci::type::accessorType::commUtilizationRequestMDT:
      return boost::make_unique<asb_uci::type::CommUtilizationRequestMDT>().release();
    case uci::type::accessorType::commUtilizationRequestMT:
      return boost::make_unique<asb_uci::type::CommUtilizationRequestMT>().release();
    case uci::type::accessorType::commUtilizationRequestStatusMDT:
      return boost::make_unique<asb_uci::type::CommUtilizationRequestStatusMDT>().release();
    case uci::type::accessorType::commUtilizationRequestStatusMT:
      return boost::make_unique<asb_uci::type::CommUtilizationRequestStatusMT>().release();
    case uci::type::accessorType::commWaveformActivityCommandPET:
      return boost::make_unique<asb_uci::type::CommWaveformActivityCommandPET>().release();
    case uci::type::accessorType::commWaveformActivityPET:
      return boost::make_unique<asb_uci::type::CommWaveformActivityPET>().release();
    case uci::type::accessorType::commWaveformCapabilityCommandPET:
      return boost::make_unique<asb_uci::type::CommWaveformCapabilityCommandPET>().release();
    case uci::type::accessorType::completedRequirementMetricsType:
      return boost::make_unique<asb_uci::type::CompletedRequirementMetricsType>().release();
    case uci::type::accessorType::componentConfigurationDataRequestMDT:
      return boost::make_unique<asb_uci::type::ComponentConfigurationDataRequestMDT>().release();
    case uci::type::accessorType::componentConfigurationDataRequestMT:
      return boost::make_unique<asb_uci::type::ComponentConfigurationDataRequestMT>().release();
    case uci::type::accessorType::componentConfigurationDataRequestStatusMDT:
      return boost::make_unique<asb_uci::type::ComponentConfigurationDataRequestStatusMDT>().release();
    case uci::type::accessorType::componentConfigurationDataRequestStatusMT:
      return boost::make_unique<asb_uci::type::ComponentConfigurationDataRequestStatusMT>().release();
    case uci::type::accessorType::componentConfigurationID_Type:
      return boost::make_unique<asb_uci::type::ComponentConfigurationID_Type>().release();
    case uci::type::accessorType::componentConfigurationMT:
      return boost::make_unique<asb_uci::type::ComponentConfigurationMT>().release();
    case uci::type::accessorType::componentConfigurationPET:
      return boost::make_unique<asb_uci::type::ComponentConfigurationPET>().release();
    case uci::type::accessorType::componentConfigurationTreeType:
      return boost::make_unique<asb_uci::type::ComponentConfigurationTreeType>().release();
    default:
      return nullptr;
  }
}

} // namespace util

} // namespace asb_uci

