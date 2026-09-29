// OoT3D decomp @ 0040ac14  name=FUN_0040ac14  size=256

void FUN_0040ac14(int param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;

  FUN_00306318(param_1,&local_28);
  local_34 = *DAT_0040ad14;
  uStack_30 = DAT_0040ad14[1];
  uStack_2c = DAT_0040ad14[2];
  bVar1 = *(byte *)((int)&local_34 + *(int *)(param_1 + 0xe4));
  uVar2 = (uint)bVar1;
  bVar6 = uVar2 == 0;
  *(byte *)(local_28 + 5) = bVar1;
  if (bVar6) {
    uVar2 = param_3 >> 1;
  }
  *(byte **)(local_28 + 8) = param_2;
  if (bVar6) {
    *(uint *)(local_28 + 0xc) = uVar2;
  }
  else {
    if (param_2 != (byte *)0x0 && param_3 != 0) {
      iVar5 = 0;
      uVar2 = 0;
      if (param_2 != (byte *)0x0 && param_3 != 0) {
        do {
          uVar4 = param_3 - uVar2;
          if (param_2 == (byte *)0x0 || param_3 == uVar2) {
LAB_0040acf0:
            iVar3 = 0;
          }
          else {
            bVar1 = *param_2;
            if (bVar1 < 0x80) {
              iVar3 = 1;
            }
            else {
              bVar6 = uVar4 == 2;
              if (1 < uVar4) {
                bVar6 = (bVar1 & 0xe0) == 0xc0;
              }
              if (bVar6) {
                iVar3 = 2;
              }
              else {
                bVar6 = uVar4 == 3;
                if (2 < uVar4) {
                  bVar6 = (bVar1 & 0xf0) == 0xe0;
                }
                if (bVar6) {
                  iVar3 = 3;
                }
                else {
                  bVar6 = uVar4 == 4;
                  if (3 < uVar4) {
                    bVar6 = (bVar1 & 0xf8) == 0xf0;
                  }
                  if (!bVar6) goto LAB_0040acf0;
                  iVar3 = 4;
                }
              }
            }
          }
          uVar2 = uVar2 + iVar3;
          param_2 = param_2 + iVar3;
          iVar5 = iVar5 + 1;
        } while (uVar2 < param_3);
      }
    }
    else {
      iVar5 = 0;
    }
    *(int *)(local_28 + 0xc) = iVar5;
  }
  return;
}
