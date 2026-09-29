// OoT3D decomp @ 0030acc0  name=FUN_0030acc0  size=1676

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0030acc0(int *param_1,uint param_2,int param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_98 [2];
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  uint local_6c [5];
  undefined1 local_58;
  undefined1 local_57;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  uint *local_40 [3];
  int *piStack_34;
  int iStack_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;

  if ((param_1[1] != 0) &&
     (iVar1 = FUN_0030b780(), (iVar1 != 0 && param_2 != 0xffffffff) && param_3 != 0)) {
    switch(param_2 >> 0x18) {
    case 1:
      iVar1 = FUN_00488358(param_1[1],param_2);
      if (iVar1 == 1) {
        local_28 = param_5;
        uVar2 = FUN_0047edf4(param_1,param_2,param_3,param_4);
        return uVar2;
      }
      if (iVar1 == 3) {
        local_24 = 0xffffffff;
        local_28 = param_5;
        uVar2 = FUN_002d322c(param_1,param_2,param_3,param_4);
        return uVar2;
      }
      break;
    case 2:
      local_28 = param_5;
      uVar2 = FUN_0047ec44(param_1,param_2,param_3,param_4);
      return uVar2;
    case 3:
      local_28 = param_5;
      uVar2 = FUN_002d304c(param_1,param_2,param_3,param_4);
      return uVar2;
    case 5:
      if ((param_4 & 8) != 0) {
        uVar2 = FUN_0048be78(param_1[1],param_2);
        local_28 = 1;
        iVar1 = FUN_0030a884(param_1,uVar2,param_3,param_5);
        if (iVar1 == 0) {
          return 0;
        }
      }
      return 1;
    case 6:
      uVar2 = FUN_0048be78(param_1[1],param_2);
      local_28 = 1;
      iStack_30 = FUN_0030a884(param_1,uVar2,param_3,param_5);
      if (iStack_30 == 0) {
        return 0;
      }
      local_28 = 0;
      piStack_34 = param_1;
      local_2c = param_3;
      FUN_00486730(local_40);
      uVar6 = 0;
      uVar8 = *local_40[0];
      if (uVar8 != 0) {
        do {
          iVar1 = FUN_004882d8(local_40,&local_48,uVar6);
          if (iVar1 == 0) {
            return 0;
          }
          if (local_44 == 0) {
            if (uVar6 == 0) {
              uVar6 = FUN_002ce2ac(local_40);
              uVar8 = 0;
              if (uVar6 == 0) {
                return 1;
              }
              do {
                iVar1 = FUN_002ce268(local_40,&local_48,uVar8);
                if (iVar1 != 0) {
                  local_98[0] = 0;
                  iVar1 = FUN_0030acc0(param_1,local_48,local_2c,local_44);
                  if (iVar1 == 0) {
                    return 0;
                  }
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar6);
              return 1;
            }
          }
          else {
            (**(code **)(*param_1 + 8))(param_1,local_48,local_44);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar8);
      }
      uVar6 = FUN_002ce2ac(local_40);
      uVar8 = 0;
      if (uVar6 == 0) {
        return 1;
      }
      do {
        iVar3 = FUN_002ce268(local_40,&local_48,uVar8);
        iVar1 = 0;
        if (iVar3 != 0) {
          iVar1 = local_44;
        }
        if (iVar3 != 0 && iVar1 != 0) {
          uVar9 = local_48 >> 0x18;
          if (uVar9 == 1) {
            iVar1 = FUN_00488358(param_1[1],local_48);
            uVar9 = local_48;
            if (iVar1 == 1) {
              local_6c[2] = 0;
              puVar5 = local_6c + 2;
              iVar1 = 2;
              local_50 = 0;
              local_4c = local_4c & 0xffff0000;
              do {
                puVar5[1] = 0xffffffff;
                iVar1 = iVar1 + -1;
                puVar5 = puVar5 + 2;
                *puVar5 = 0xffffffff;
              } while (iVar1 != 0);
              iVar1 = FUN_0048c0b4(param_1[1],uVar9,local_6c + 2);
              if (iVar1 != 0) {
                uVar9 = 0;
                do {
                  if (local_6c[uVar9 + 3] != -1) {
                    local_6c[1] = 0xffffffff;
                    iVar1 = FUN_0048be4c(param_1[1],local_6c[uVar9 + 3],local_6c + 1);
                    if ((iVar1 != 0) &&
                       (iVar1 = (**(code **)(*param_1 + 0xc))(param_1,local_6c[1]), iVar1 != 0)) {
                      FUN_0030ab10(&local_70,iVar1);
                      piVar4 = (int *)FUN_003043ac(&local_70);
                      if (*piVar4 != 0) {
                        FUN_002ce114(param_1,piVar4[1],local_2c);
                      }
                    }
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 < 4);
              }
            }
          }
          else if (uVar9 == 2) {
            local_54 = 0xffffffff;
            local_50 = 0xffffffff;
            local_4c = 0;
            iVar1 = FUN_0048bf58(param_1[1],local_48,&local_54);
            if (iVar1 != 0) {
              iVar1 = FUN_00488358(param_1[1],local_54);
              uVar9 = local_54;
              if (iVar1 == 1) {
                if (local_54 <= local_50) {
                  do {
                    local_70 = 0;
                    local_58 = 0;
                    puVar5 = &local_70;
                    iVar1 = 2;
                    local_6c[4] = 0;
                    local_57 = 0;
                    do {
                      puVar5[1] = 0xffffffff;
                      iVar1 = iVar1 + -1;
                      puVar5 = puVar5 + 2;
                      *puVar5 = 0xffffffff;
                    } while (iVar1 != 0);
                    iVar1 = FUN_0048c0b4(param_1[1],uVar9,&local_70);
                    if (iVar1 != 0) {
                      uVar7 = 0;
                      do {
                        if (local_6c[uVar7] != 0xffffffff) {
                          local_74 = 0xffffffff;
                          iVar1 = FUN_0048be4c(param_1[1],local_6c[uVar7],&local_74);
                          if ((iVar1 != 0) &&
                             (iVar1 = (**(code **)(*param_1 + 0xc))(param_1,local_74), iVar1 != 0))
                          {
                            FUN_0030ab10(auStack_7c,iVar1);
                            piVar4 = (int *)FUN_003043ac(auStack_7c);
                            if (*piVar4 != 0) {
                              FUN_002ce114(param_1,piVar4[1],local_2c);
                            }
                          }
                        }
                        uVar7 = uVar7 + 1;
                      } while (uVar7 < 4);
                    }
                    uVar9 = uVar9 + 1;
                  } while (uVar9 <= local_50);
                }
              }
              else if (((iVar1 == 3) && (local_54 != 0xffffffff)) &&
                      (iVar1 = FUN_00488374(param_1[1],local_54,local_6c), iVar1 != 0)) {
                local_74 = 0;
                local_70 = local_70 & 0xffff0000;
                iVar1 = FUN_0048bedc(param_1[1],uVar9,&local_78);
                if ((iVar1 != 0) &&
                   (iVar1 = (**(code **)(*param_1 + 0xc))(param_1,local_6c[0]), iVar1 != 0)) {
                  FUN_0030a82c(auStack_80,iVar1);
                  local_90 = 0;
                  local_8f = 0;
                  local_8e = 0;
                  local_8c = 0;
                  local_8d = 0;
                  iVar1 = FUN_0030a784(auStack_80,local_98,local_78,0);
                  if (iVar1 != 0) {
                    FUN_002ce114(param_1,local_98[0],local_2c);
                  }
                }
              }
            }
          }
          else if ((uVar9 == 3) && (local_48 != 0xffffffff)) {
            local_4c = 0xffffffff;
            iVar1 = FUN_0048be4c(param_1[1],local_48,&local_4c);
            if ((iVar1 != 0) &&
               (iVar1 = (**(code **)(*param_1 + 0xc))(param_1,local_4c), iVar1 != 0)) {
              FUN_0030ab10(&local_54,iVar1);
              piVar4 = (int *)FUN_003043ac(&local_54);
              if (*piVar4 != 0) {
                FUN_002ce114(param_1,piVar4[1],local_2c);
              }
            }
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar6);
      return 1;
    }
  }
  return 0;
}
