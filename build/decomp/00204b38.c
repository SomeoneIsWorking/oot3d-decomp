// OoT3D decomp @ 00204b38  name=FUN_00204b38  size=300

void FUN_00204b38(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;

  FUN_003731e0(param_1 + 0x1a4);
  uVar2 = DAT_0035bac8;
  iVar4 = DAT_0035bac4;
  if (*(int *)(DAT_00204c0c + *(short *)(*(int *)(param_1 + 0x128) + 0x1c) * 4) != 8) {
    if ((*(short *)(param_1 + 0x234) == 0) ||
       (sVar1 = *(short *)(param_1 + 0x234) + -1, *(short *)(param_1 + 0x234) = sVar1,
       uVar3 = DAT_00204c14, uVar2 = DAT_00204c10, sVar1 == 0)) {
      uVar3 = DAT_00204c1c;
      uVar2 = DAT_00204c18;
      *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 0x355;
      FUN_003402f4(uVar3,uVar2,param_1 + 0x2c);
    }
    else {
      *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + -0xd5;
      FUN_003402f4(uVar3,uVar2,param_1 + 0x2c);
    }
    if (*(short *)(param_1 + 0x234) == 0) {
      FUN_00375bcc(param_1,DAT_00204c20);
      FUN_00373d40(param_1 + 0x1a4,*(undefined4 *)(DAT_00204c24 + *(short *)(param_1 + 0x1c) * 4));
      *(undefined4 *)(param_1 + 0x22c) = DAT_00204c28;
    }
    return;
  }
  *(undefined4 *)(DAT_0035bac4 + *(short *)(param_1 + 0x1c) * 4) = 0;
  *(byte *)(param_1 + 0xefc) = *(byte *)(param_1 + 0xefc) & 0xfc;
  FUN_00370350(uVar2,param_1 + 0x1a4,*(undefined4 *)(iVar4 + 0x10 + *(short *)(param_1 + 0x1c) * 4))
  ;
  *(undefined1 *)(param_1 + 0x231) = 0;
  *(undefined2 *)(param_1 + 0x234) = 0x1e;
  *(undefined4 *)(param_1 + 0x22c) = DAT_0035bacc;
  return;
}
