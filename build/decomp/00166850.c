// OoT3D decomp @ 00166850  name=FUN_00166850  size=328

void FUN_00166850(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;

  if (*(int *)(DAT_00166998 + 4) != 0) {
    FUN_003510b0(param_1,DAT_0016699c);
    FUN_00372f38(param_1,param_2,param_1 + 0x768);
    FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0);
    FUN_00353dd0(param_2);
    FUN_0034fb3c(param_2,param_1 + 0x70c,param_1,DAT_001669a0);
    uVar1 = DAT_001669ac;
    FUN_00372d4c(DAT_001669ac,DAT_001669a4,param_1 + 0xbc,DAT_001669a8);
    FUN_0037572c(DAT_001669b0,param_1);
    *(undefined1 *)(param_1 + 0xb6) = 0xff;
    uVar2 = DAT_001669b4;
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    *(undefined4 *)(param_1 + 100) = uVar1;
    sVar3 = FUN_0036bba8(param_2,0x1b);
    *(short *)(param_1 + 0x116) = sVar3;
    if (sVar3 == 0) {
      iVar5 = (int)*(char *)((uint)*(byte *)(DAT_001669b8 + 0x11) + DAT_001669bc);
      if (iVar5 < 10) {
        uVar4 = *(undefined2 *)(DAT_001669c0 + iVar5 * 2);
      }
      else {
        uVar4 = (undefined2)DAT_001669c4;
      }
      *(undefined2 *)(param_1 + 0x116) = uVar4;
    }
    *(undefined4 *)(param_1 + 0x708) = DAT_001669c8;
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
