// OoT3D decomp @ 004a0f1c  name=FUN_004a0f1c  size=1488

/* WARNING: Type propagation algorithm not settling */

int FUN_004a0f1c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint extraout_r2;
  uint uVar5;
  ushort local_44 [2];
  undefined1 local_40 [4];
  uint local_3c;
  ushort local_34 [2];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20 [2];

  iVar1 = (**(code **)(*(int *)param_1[7] + 0x14))((int *)param_1[7],local_20,&local_24);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)param_1[7] + 0x28))();
    if (iVar1 == 0) {
      return 1;
    }
    FUN_002bf104(param_1);
    return 3;
  }
  (**(code **)*param_1)(param_1,s_Read_packet__p__u_004a125c,local_20[0],local_24);
  uVar4 = extraout_r2;
  if (local_20[0] != 0) {
    uVar4 = local_24;
  }
  if (local_20[0] != 0 && uVar4 != 0) {
    if (*(char *)((int)param_1 + 0x2e) == '\0') {
      if (uVar4 < 0xe) {
        return 1;
      }
      (**(code **)*param_1)(param_1,s_searching_synchronisation_patter_004a1278);
      iVar1 = local_20[0];
      iVar2 = local_24 + local_20[0];
      while (iVar3 = FUN_002bef1c(local_20[0],local_40,local_44), iVar3 == 0) {
        if (*(char *)((int)param_1 + 0x2f) != '\0') {
          (**(code **)*param_1)(param_1,s_not_a_synchronisation_datagram_004a129c);
          iVar1 = (**(code **)(*(int *)param_1[7] + 0x18))((int *)param_1[7],local_24);
          goto joined_r0x004a1120;
        }
        local_20[0] = local_20[0] + 1;
        if (local_20[0] == iVar2 + -0xd) {
          (**(code **)*param_1)(param_1,s_synchronisation_pattern_not_foun_004a12e8);
          iVar1 = (**(code **)(*(int *)param_1[7] + 0x18))((int *)param_1[7],local_20[0] - iVar1);
          if (iVar1 == 0) {
            return 0x80;
          }
          return 2;
        }
      }
      if ((int)local_3c < 0) {
        *(undefined1 *)((int)param_1 + 0x2d) = 1;
        local_3c = local_3c & 0x7fffffff;
      }
      else {
        *(undefined1 *)((int)param_1 + 0x2d) = 0;
      }
      if (local_44[0] < 0x10) goto LAB_004a1248;
      (**(code **)*param_1)(param_1,s_synchronisation_pattern_found_at_004a12bc,local_20[0] - iVar1)
      ;
      *(undefined1 *)((int)param_1 + 0x2e) = 1;
      iVar1 = (**(code **)(*(int *)param_1[7] + 0x18))((int *)param_1[7],local_20[0] - iVar1);
    }
    else {
      uVar5 = param_1[8];
      if (*(char *)((int)param_1 + 0x2f) == '\0') {
        if (uVar5 != 0 && uVar5 != uVar4) {
          (**(code **)(*param_1 + 4))(param_1,DAT_004a1270);
          goto LAB_004a1248;
        }
      }
      else if (uVar5 != 0 && uVar5 < uVar4) {
        (**(code **)(*param_1 + 4))(param_1,DAT_004a1274);
        goto LAB_004a1248;
      }
      local_28 = 0;
      if ((0xe < uVar4) && (iVar1 = FUN_002bef1c(local_20[0],&local_30,local_34), iVar1 != 0)) {
        if ((int)local_2c < 0) {
          *(undefined1 *)((int)param_1 + 0x2d) = 1;
          local_2c = local_2c & 0x7fffffff;
        }
        else {
          *(undefined1 *)((int)param_1 + 0x2d) = 0;
        }
        if (local_34[0] < 0x10) {
LAB_004a1248:
          FUN_002bf00c(param_1);
          return 0x49;
        }
        if (local_2c != 0 || local_30 != 0) {
          if ((param_1[3] != 0 || param_1[2] != 0) && (param_1[5] == 0 && param_1[4] == 0)) {
            iVar1 = local_30 - param_1[2];
            iVar2 = local_2c - (param_1[3] + (uint)(local_30 < (uint)param_1[2]));
            param_1[4] = iVar1;
            param_1[5] = iVar2;
            (**(code **)*param_1)(param_1,s_DeltaGts___d_004a159c,iVar1,iVar2);
          }
          param_1[2] = local_30;
          param_1[3] = local_2c;
          (**(code **)*param_1)(param_1,s_Synchro_block__flushing_and_disa_004a15ac);
          FUN_002bf104(param_1);
          iVar1 = *(int *)(param_1[0x11] + 8);
          if (iVar1 != param_1[0x11]) {
            do {
              *(undefined1 *)(*(int *)(iVar1 + 0x18) + 0x7c) = 0;
              iVar2 = *(int *)(iVar1 + 0xc);
              if (*(int *)(iVar1 + 0xc) == 0) {
                for (iVar2 = *(int *)(iVar1 + 4); iVar1 == *(int *)(iVar2 + 0xc);
                    iVar2 = *(int *)(iVar2 + 4)) {
                  iVar1 = iVar2;
                }
                if (*(int *)(iVar1 + 0xc) != iVar2) {
                  iVar1 = iVar2;
                }
              }
              else {
                do {
                  iVar1 = iVar2;
                  iVar2 = *(int *)(iVar1 + 8);
                } while (*(int *)(iVar1 + 8) != 0);
              }
            } while (iVar1 != param_1[0x11]);
          }
          param_1[9] = 0x40;
        }
        uVar4 = param_1[8];
        uVar5 = (uint)local_34[0];
        if (uVar4 != uVar5) {
          param_1[8] = uVar5;
          iVar1 = (**(code **)(*(int *)param_1[7] + 8))();
          if (iVar1 == 0) {
            (**(code **)(*param_1 + 4))(param_1,s_error__reader_could_not_change_i_004a15dc);
            return 0x42;
          }
          if (uVar4 < uVar5) {
            return 0;
          }
        }
        (**(code **)*param_1)(param_1,s_GTS___d_004a160c,param_1[2],param_1[3]);
        (**(code **)*param_1)(param_1,s_Packet_size___d_004a1618,param_1[8]);
        local_28 = 0xe;
        uVar4 = param_1[8];
        if (local_24 < (uint)param_1[8]) {
          uVar4 = local_24;
        }
        while (local_24 = uVar4, iVar1 = FUN_004a460c(param_1,local_20[0],&local_28,local_24),
              iVar1 != 0x100) {
          uVar4 = local_24;
          if (iVar1 != 0) {
            return iVar1;
          }
        }
        if (local_24 < local_28) {
          return 0x43;
        }
      }
      iVar2 = FUN_004a4370(param_1,local_20[0],&local_28,local_24);
      iVar1 = DAT_004a162c;
      if (*(char *)((int)param_1 + 0x2e) == '\0') {
        return 0;
      }
      if (iVar2 != 0) {
        return iVar2;
      }
      while (iVar2 = FUN_004a5150(param_1,local_20[0],&local_28,local_24), iVar2 != iVar1) {
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      if (local_24 < local_28) {
        return 0x43;
      }
      iVar1 = (**(code **)(*(int *)param_1[7] + 0x18))();
    }
    if (iVar1 == 0) {
      return 0x80;
    }
  }
  else {
    if (*(char *)((int)param_1 + 0x2f) == '\0') {
      FUN_002bf00c(param_1);
      iVar1 = (**(code **)(*(int *)param_1[7] + 0x18))((int *)param_1[7],0);
joined_r0x004a1120:
      if (iVar1 != 0) {
        return 2;
      }
      return 0x80;
    }
    param_1[10] = 0x10000;
    FUN_002bf074(param_1);
    iVar1 = (**(code **)(*(int *)param_1[7] + 0x18))((int *)param_1[7],0);
    if (iVar1 == 0) {
      return 0x80;
    }
    if (*(char *)((int)param_1 + 0x2e) == '\0') {
      return 2;
    }
  }
  return 0;
}
