// OoT3D decomp @ 00444544  name=FUN_00444544  size=696

void FUN_00444544(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;

  iVar2 = DAT_00444800;
  uVar1 = DAT_004447fc;
  iVar6 = 0x56;
  iVar7 = *(int *)(param_1 + 0x20ac);
  do {
    local_48 = uVar1;
    FUN_002f9430(*(undefined4 *)(iVar2 + 4),&local_48,1,iVar6);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x5c);
  if (*(char *)(DAT_00444804 + param_1) < '\x02') {
    if ((*(short *)(param_1 + 0x104) == 0x4b) && (iVar6 = FUN_0036e864(param_1,0x38), iVar6 != 0)) {
      FUN_002e64fc(2);
      *(undefined4 *)(iVar2 + 100) = 1;
    }
    else {
      uVar3 = DAT_00444810;
      if (*(char *)(param_1 + 0x2e40) == '\0') {
        if (*(short *)(DAT_00444808 + 0x94) == 1) {
          FUN_002e64fc(4);
          *(undefined4 *)(iVar2 + 100) = 1;
        }
        else {
          if ((*(uint *)(DAT_0044480c + iVar7) & 0x800000) == 0) {
            FUN_002e64fc(0);
            if (*(int *)(iVar2 + 100) == 1) {
              FUN_002efd88();
            }
            else if (*(int *)(iVar2 + 100) == 2) {
              iVar6 = 0x3b;
              do {
                local_48 = uVar3;
                local_44 = uVar3;
                FUN_002f9430(*(undefined4 *)(iVar2 + 4),&local_48,1,iVar6);
                iVar6 = iVar6 + 1;
              } while (iVar6 < 0x53);
            }
            *(undefined4 *)(iVar2 + 100) = 0;
            return;
          }
          FUN_002e64fc(5);
          iVar6 = 0x3b;
          do {
            local_48 = uVar1;
            local_44 = uVar3;
            FUN_002f9430(*(undefined4 *)(iVar2 + 4),&local_48,1,iVar6);
            iVar6 = iVar6 + 1;
          } while (iVar6 < 0x53);
          iVar6 = 0x56;
          do {
            local_48 = uVar3;
            local_44 = uVar3;
            FUN_002f9430(*(undefined4 *)(iVar2 + 4),&local_48,1,iVar6);
            uVar5 = DAT_00444818;
            uVar4 = DAT_00444814;
            iVar6 = iVar6 + 1;
          } while (iVar6 < 0x5c);
          iVar6 = 0;
          local_40 = DAT_00444814;
          local_3c = DAT_00444814;
          do {
            if ((*(byte *)(param_2 + 0x274) == 0) ||
               ((int)(uint)*(byte *)(param_2 + 0x274) < iVar6 + 1)) {
              local_34 = uVar4;
            }
            else {
              local_34 = uVar3;
            }
            local_38 = uVar5;
            FUN_002fc40c(*(undefined4 *)(iVar2 + 4),&local_38,&local_40,1,iVar6 + 0x56);
            iVar6 = iVar6 + 1;
          } while (iVar6 < 6);
          *(undefined4 *)(iVar2 + 100) = 2;
        }
      }
      else {
        FUN_002e64fc(3);
        *(undefined4 *)(iVar2 + 100) = 1;
      }
    }
  }
  else {
    FUN_002e64fc(1);
    *(undefined4 *)(iVar2 + 100) = 1;
  }
  iVar6 = 0;
  do {
    if ((iVar6 == 0x1d || iVar6 == 0x22) || iVar6 == 0x23) {
      local_48 = uVar1;
      FUN_002f9430(*(undefined4 *)(iVar2 + 4),&local_48,1,iVar6);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x3b);
  return;
}
