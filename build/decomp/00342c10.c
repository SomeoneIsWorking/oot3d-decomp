// OoT3D decomp @ 00342c10  name=FUN_00342c10  size=604

void FUN_00342c10(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined4 local_38;
  
  iVar3 = DAT_00342e6c;
  iVar8 = *(int *)(DAT_00342e6c + 0x80);
  if (iVar8 == DAT_00342e6c + 0x198) {
    for (iVar8 = *(int *)(DAT_00342e6c + -8); iVar8 != DAT_00342e6c + 0x110;
        iVar8 = *(int *)(iVar8 + 0x80)) {
      if (((int)param_3 <= (int)(uint)*(byte *)(iVar8 + 0x62)) &&
         ((*(byte *)(iVar8 + 0x62) != param_3 || ((*(ushort *)(iVar8 + 0x5e) & 1) == 0))))
      goto LAB_00342c80;
    }
    iVar8 = 0;
  }
LAB_00342c80:
  if (iVar8 != 0) {
    iVar9 = *(int *)(DAT_00342e70 + param_2 * 4);
    iVar2 = FUN_002d6a50(iVar8,0);
    if (iVar2 == 0) {
      if (*(int *)(iVar8 + 0x80) != 0) {
        *(undefined4 *)(*(int *)(iVar8 + 0x80) + 0x7c) = *(undefined4 *)(iVar8 + 0x7c);
      }
      if (*(int *)(iVar8 + 0x7c) != 0) {
        *(undefined4 *)(*(int *)(iVar8 + 0x7c) + 0x80) = *(undefined4 *)(iVar8 + 0x80);
      }
      *(undefined4 *)(iVar8 + 0x80) = 0;
      *(undefined4 *)(iVar8 + 0x7c) = 0;
      iVar3 = *(int *)(iVar3 + 0x18c);
      uVar7 = *(undefined4 *)(iVar3 + 0x80);
      *(int *)(iVar8 + 0x7c) = iVar3;
      *(undefined4 *)(iVar8 + 0x80) = uVar7;
      if (*(int *)(iVar3 + 0x80) != 0) {
        *(int *)(*(int *)(iVar3 + 0x80) + 0x7c) = iVar8;
      }
      *(int *)(iVar3 + 0x80) = iVar8;
      *(char *)(iVar8 + 99) = (char)param_2;
      *(char *)(iVar8 + 0x62) = (char)param_3;
      uVar4 = FUN_002b7cb0(*(undefined4 *)(param_1 + 0x5fc4),param_2);
      puVar1 = DAT_00342e78;
      if (uVar4 != 0) {
        iVar3 = DAT_00342e74 + param_2 * 0x28;
        if (*(int *)(iVar3 + 8) == 0) {
          if (((*DAT_00342e78 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_00342e78), iVar2 != 0)) {
            FUN_0036788c(DAT_00342e7c);
          }
          iVar2 = DAT_00342e88;
          uVar7 = FUN_00340d00(*(undefined4 *)(DAT_00342e88 + 0x47c),uVar4,0);
          *(undefined4 *)(iVar3 + 8) = uVar7;
          uVar5 = *(uint *)(iVar9 + 8) & 1;
          bVar10 = uVar5 != 0;
          if (bVar10) {
            uVar5 = *(uint *)(iVar9 + 0x10);
            uVar4 = 0;
          }
          if (bVar10 && uVar5 != 0) {
            do {
              uVar7 = FUN_002b7cb0(*(undefined4 *)(param_1 + 0x5fc4),*(int *)(iVar9 + 0xc) + uVar4);
              if (((*puVar1 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_00342e78), iVar6 != 0)) {
                FUN_0036788c(DAT_00342e7c);
              }
              uVar7 = FUN_00340d00(*(undefined4 *)(iVar2 + 0x47c),uVar7,0);
              iVar6 = uVar4 * 4;
              uVar4 = uVar4 + 1;
              *(undefined4 *)(iVar3 + iVar6 + 0xc) = uVar7;
            } while (uVar4 < *(uint *)(iVar9 + 0x10));
          }
        }
        *(undefined4 *)(iVar8 + 100) = *(undefined4 *)(iVar3 + 8);
        *(int *)(iVar8 + 0x68) = iVar3 + 8;
      }
      iVar3 = (**(code **)(iVar9 + 4))(param_1,local_38,iVar8,param_4);
      if (iVar3 == 0) {
        FUN_002d6a50(iVar8,0);
        return;
      }
    }
  }
  return;
}

