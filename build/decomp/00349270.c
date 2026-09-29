// OoT3D decomp @ 00349270  name=FUN_00349270  size=484

void FUN_00349270(int param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;

  uVar1 = DAT_00349460;
  if (*(int *)(param_1 + 0x1a4) == DAT_00349454) {
    *(undefined2 *)(param_1 + 0x1b4) = 0xf;
    *(undefined2 *)(param_1 + 0x1b2) = 0x1e;
    FUN_00374a58(uVar1,param_1 + 0x5c0,0x12);
    uVar3 = FUN_0036ae14(param_1 + 0x5c0,0x12);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x1fc) = uVar3;
    *(undefined2 *)(param_1 + 0x498) = 1;
    param_3 = *(char *)(param_1 + 0xb7) - param_3;
    *(char *)(param_1 + 0xb7) = param_3;
    if (param_3 < '\0') {
      *(undefined1 *)(param_1 + 0xb7) = 0;
    }
    if (*(char *)(param_1 + 0xb7) < '\x01') {
      *(undefined4 *)(param_1 + 0x1a4) = DAT_00349464;
      FUN_00370350(uVar1,param_1 + 0x5c0,0x12);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      iVar4 = DAT_00349468;
      *(undefined2 *)(param_1 + 0x498) = 0;
      iVar2 = DAT_00349470;
      *(undefined2 *)(iVar4 + param_1) = 0;
      uVar3 = DAT_0034946c;
      *(undefined2 *)(param_1 + 0x1aa) = 0;
      *(undefined2 *)(param_1 + 0x1a8) = 0;
      *(short *)(param_1 + 0x1b2) = (short)uVar3;
      iVar4 = *(int *)(iVar2 + 0x90);
      *(undefined4 *)(iVar4 + 0x1a4) = DAT_00349474;
      FUN_00370350(uVar1,iVar4 + 0x5c0,5);
      uVar3 = DAT_00349478;
      *(undefined1 *)(iVar4 + 0x7d8) = 0;
      fVar5 = (float)FUN_00371e50(uVar3);
      *(short *)(DAT_0034947c + iVar4) = (short)(int)fVar5;
      iVar4 = *(int *)(iVar2 + 0x8c);
      *(undefined4 *)(iVar4 + 0x1a4) = DAT_00349474;
      FUN_00370350(uVar1,iVar4 + 0x5c0,5);
      *(undefined1 *)(iVar4 + 0x7d8) = 0;
      fVar5 = (float)FUN_00371e50(uVar3);
      uVar1 = DAT_00349480;
      *(short *)(DAT_0034947c + iVar4) = (short)(int)fVar5;
      *(undefined2 *)(*(int *)(iVar2 + 0x8c) + 0x1d0) = 0xc;
      *(undefined4 *)(param_1 + 0x228) = uVar1;
      FUN_00375b70(param_2,param_1);
      FUN_00375bcc(param_1,DAT_00349484);
      return;
    }
    FUN_00375bcc(param_1,DAT_00349488);
    FUN_00375bcc(param_1,DAT_0034948c);
  }
  else {
    FUN_00374a58(DAT_00349458,param_1 + 0x5c0,0x16);
    uVar1 = DAT_0034945c;
    *(undefined2 *)(param_1 + 0x1d0) = 0x96;
    *(undefined2 *)(param_1 + 0x1d2) = 0x1e;
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(undefined2 *)(param_1 + 0x498) = 0;
  }
  *(int *)(param_1 + 0x1a4) = DAT_00349454;
  return;
}
