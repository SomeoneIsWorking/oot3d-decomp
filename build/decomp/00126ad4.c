// OoT3D decomp @ 00126ad4  name=FUN_00126ad4  size=536

void FUN_00126ad4(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;

  FUN_003731e0(param_1 + 0x1a4);
  iVar6 = *(int *)(param_1 + 0x124);
  sVar1 = *(short *)(iVar6 + 0x1c);
  bVar8 = sVar1 != 0x40;
  if (bVar8) {
    iVar6 = *(int *)(param_1 + 0x128);
    sVar1 = *(short *)(iVar6 + 0x1c);
  }
  if (bVar8 && sVar1 != 0x40) {
    if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
      *(undefined2 *)(param_1 + 0x1c) = 0x10;
      FUN_0036f44c(param_1);
      return;
    }
  }
  else {
    iVar4 = FUN_003736fc(DAT_00126cf0,DAT_00126cec,param_1 + 0x1a4);
    uVar5 = DAT_00126d10;
    iVar3 = DAT_00126d0c;
    uVar2 = DAT_00126cf4;
    if (iVar4 == 0) {
      if (*(int *)(param_1 + 0x1e0) < DAT_00126d00) {
        uVar5 = FUN_0036e800(param_1,iVar6);
        FUN_00370084(param_1 + 0xbe,uVar5,2,DAT_00126d04);
      }
      else if ((((uint)DAT_00126d08 < (uint)(*(float *)(iVar6 + 0x2c) - *(float *)(param_1 + 0x2c)))
               && ((int)ABS(*(float *)(param_1 + 0x28) - *(float *)(iVar6 + 0x28)) <
                   (int)((int)DAT_00126d08 + 0x80000000U))) &&
              ((int)ABS(*(float *)(param_1 + 0x30) - *(float *)(iVar6 + 0x30)) <
               (int)((int)DAT_00126d08 + 0x80000000U))) {
        iVar7 = *(int *)(param_1 + 0x128);
        iVar4 = *(int *)(*(int *)(param_1 + 0x124) + 0x7d8);
        bVar8 = iVar4 != DAT_00126d0c;
        if (!bVar8) {
          iVar4 = *(int *)(iVar7 + 0x7d8);
        }
        if (bVar8 || iVar4 != DAT_00126d0c) {
          *(undefined4 *)(param_1 + 0x140) = 0;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffee;
          *(int *)(param_1 + 0x7d8) = iVar3;
        }
        else {
          FUN_00374428();
          FUN_00374428(iVar7);
          FUN_00374428(param_1);
        }
        *(byte *)(param_1 + 0x7f6) = *(byte *)(param_1 + 0x7f6) | 1;
      }
      else if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
        *(undefined4 *)(param_1 + 0x6c) = DAT_00126cf4;
        FUN_00375bcc(param_1,uVar5);
        FUN_0036f44c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x6c) = DAT_00126cf8;
      *(undefined4 *)(param_1 + 100) = DAT_00126cfc;
    }
    if (((int)ABS(*(float *)(param_1 + 0x28) - *(float *)(iVar6 + 0x28)) < DAT_00126d14) &&
       ((int)ABS(*(float *)(param_1 + 0x30) - *(float *)(iVar6 + 0x30)) < DAT_00126d14)) {
      FUN_003705a0(uVar2,DAT_00126d18,param_1 + 0x6c);
      return;
    }
  }
  return;
}
