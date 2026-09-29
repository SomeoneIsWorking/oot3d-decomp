// OoT3D decomp @ 0046ba74  name=FUN_0046ba74  size=1692

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0046ba74(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 local_44 [4];
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34 [6];
  undefined4 local_1c;

  if ((param_1[1] != 0) && (iVar1 = FUN_0030b780(), iVar1 != 0 && param_2 != 0xffffffff)) {
    switch(param_2 >> 0x18) {
    default:
      goto switchD_0046bab4_caseD_0;
    case 1:
      iVar1 = FUN_00488358(param_1[1],param_2);
      if (iVar1 != 1) {
        if (iVar1 != 3) {
          return 0;
        }
        uVar3 = FUN_0048be78(param_1[1]);
        iVar1 = (**(code **)(*param_1 + 0x10))(param_1,uVar3);
        if (((param_3 & 10) == 0) || (iVar1 != 0)) {
          if ((param_3 & 8) == 0) {
            return 1;
          }
          local_1c = 0;
          iVar5 = FUN_0048bedc(param_1[1],param_2,local_34 + 5);
          if (iVar5 != 0) {
            FUN_0030a82c(&local_1c,iVar1);
            local_34[2] = 0;
            local_34[3] = local_34[3] & 0xffffff00;
            iVar1 = FUN_0030a784(&local_1c,local_34,local_34[5],0);
            if ((iVar1 != 0) && (iVar1 = FUN_002d1a00(param_1,local_34[0],local_34[1]), iVar1 != 0))
            {
              return 1;
            }
          }
        }
        return 0;
      }
      if ((param_3 & 1) != 0) {
        uVar3 = FUN_0048be78(param_1[1],param_2);
        iVar1 = (**(code **)(*param_1 + 0x10))(param_1,uVar3);
        if (iVar1 == 0) {
          return 0;
        }
      }
      if ((param_3 & 0xc) != 0) {
        local_38 = 0;
        local_34[4] = 0;
        local_34[5] = local_34[5] & 0xffff0000;
        puVar4 = &local_38;
        iVar1 = 2;
        do {
          puVar4[1] = 0xffffffff;
          iVar1 = iVar1 + -1;
          puVar4 = puVar4 + 2;
          *puVar4 = 0xffffffff;
        } while (iVar1 != 0);
        iVar1 = FUN_0048c0b4(param_1[1],param_2,&local_38);
        if (iVar1 == 0) {
          return 0;
        }
        uVar6 = 0;
        do {
          if (local_34[uVar6] != 0xffffffff) {
            uVar3 = FUN_0048be78(param_1[1]);
            iVar1 = (**(code **)(*param_1 + 0x10))(param_1,uVar3);
            if (((param_3 & 0xc) != 0) && (iVar1 == 0)) {
              return 0;
            }
            if ((param_3 & 8) != 0) {
              FUN_0030ab10(auStack_40,iVar1);
              puVar2 = (uint *)FUN_003043ac(auStack_40);
              uVar8 = 0;
              if (*puVar2 != 0) {
                do {
                  iVar1 = FUN_002d1a00(param_1,puVar2[uVar8 * 2 + 1],puVar2[uVar8 * 2 + 2]);
                  if (iVar1 == 0) {
                    return 0;
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 < *puVar2);
              }
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < 4);
      }
      return 1;
    case 2:
      local_34[1] = 0xffffffff;
      local_34[3] = 0;
      local_34[2] = 0xffffffff;
      iVar1 = FUN_0048bf58(param_1[1],param_2,local_34 + 1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_00488358(param_1[1],local_34[1]);
      if (iVar1 == 1) {
        uVar6 = local_34[1];
        if (local_34[1] <= local_34[2]) {
          do {
            if ((param_3 & 1) != 0) {
              uVar3 = FUN_0048be78(param_1[1],uVar6);
              iVar1 = (**(code **)(*param_1 + 0x10))(param_1,uVar3);
              if (iVar1 == 0) {
                return 0;
              }
            }
            if ((param_3 & 0xc) != 0) {
              local_4c = 0;
              local_38 = 0;
              local_34[0] = local_34[0] & 0xffff0000;
              puVar4 = &local_4c;
              iVar1 = 2;
              do {
                puVar4[1] = 0xffffffff;
                iVar1 = iVar1 + -1;
                puVar4 = puVar4 + 2;
                *puVar4 = 0xffffffff;
              } while (iVar1 != 0);
              iVar1 = FUN_0048c0b4(param_1[1],uVar6,&local_4c);
              if (iVar1 == 0) {
                return 0;
              }
              uVar8 = 0;
              do {
                if (*(int *)(local_44 + uVar8 * 4 + -4) != -1) {
                  uVar3 = FUN_0048be78(param_1[1]);
                  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,uVar3);
                  if (((param_3 & 0xc) != 0) && (iVar1 == 0)) {
                    return 0;
                  }
                  if ((param_3 & 8) != 0) {
                    FUN_0030ab10(auStack_54,iVar1);
                    puVar2 = (uint *)FUN_003043ac(auStack_54);
                    uVar7 = 0;
                    if (*puVar2 != 0) {
                      do {
                        iVar1 = FUN_002d1a00(param_1,puVar2[uVar7 * 2 + 1],puVar2[uVar7 * 2 + 2]);
                        if (iVar1 == 0) {
                          return 0;
                        }
                        uVar7 = uVar7 + 1;
                      } while (uVar7 < *puVar2);
                    }
                  }
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < 4);
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 <= local_34[2]);
        }
      }
      else if ((iVar1 == 3) && (uVar6 = local_34[1], local_34[1] <= local_34[2])) {
        do {
          uVar3 = FUN_0048be78(param_1[1],uVar6);
          iVar1 = (**(code **)(*param_1 + 0x10))(param_1,uVar3);
          if (((param_3 & 10) != 0) && (iVar1 == 0)) {
            return 0;
          }
          if ((param_3 & 8) != 0) {
            local_38 = 0;
            local_34[0] = local_34[0] & 0xffff0000;
            iVar5 = FUN_0048bedc(param_1[1],uVar6,&local_3c);
            uVar3 = local_3c;
            if (iVar5 == 0) {
              return 0;
            }
            FUN_0030a82c(&local_38,iVar1);
            local_48 = 0;
            uStack_47 = 0;
            uStack_46 = 0;
            uStack_45 = 0;
            local_44[0] = 0;
            iVar1 = FUN_0030a784(&local_38,&local_50,uVar3,0);
            if (iVar1 == 0) {
              return 0;
            }
            iVar1 = FUN_002d1a00(param_1,local_50,local_4c);
            if (iVar1 == 0) {
              return 0;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 <= local_34[2]);
      }
      return 1;
    case 3:
      uVar3 = FUN_0048be78(param_1[1],param_2);
      iVar1 = (**(code **)(*param_1 + 0x10))(param_1,uVar3);
      if (((param_3 & 0xc) != 0) && (iVar1 == 0)) {
        return 0;
      }
      if ((param_3 & 8) != 0) {
        FUN_0030ab10(local_34 + 5,iVar1);
        puVar2 = (uint *)FUN_003043ac(local_34 + 5);
        uVar6 = 0;
        if (*puVar2 != 0) {
          do {
            iVar1 = FUN_002d1a00(param_1,puVar2[uVar6 * 2 + 1],puVar2[uVar6 * 2 + 2]);
            if (iVar1 == 0) {
              return 0;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < *puVar2);
        }
      }
      break;
    case 5:
      uVar3 = FUN_002d1a00(param_1,param_2,0xffffffff);
      return uVar3;
    case 6:
      uVar3 = FUN_0048be78(param_1[1],param_2);
      iVar1 = (**(code **)(*param_1 + 0x10))(param_1,uVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    return 1;
  }
switchD_0046bab4_caseD_0:
  return 0;
}
