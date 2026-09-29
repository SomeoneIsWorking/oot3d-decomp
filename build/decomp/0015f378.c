// OoT3D decomp @ 0015f378  name=FUN_0015f378  size=132

void FUN_0015f378(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;

  iVar1 = FUN_00369bec();
  if (iVar1 != 0) {
    if (*(short *)(param_1 + 0xc00) == 0) {
      fVar2 = (float)FUN_00369c88(param_1,4);
      *(short *)(param_1 + 0xc0c) = (short)(int)fVar2;
    }
    uVar3 = DAT_0015f400;
    *(undefined4 *)(param_1 + 100) = DAT_0015f3fc;
    *(undefined4 *)(param_1 + 0x978) = uVar3;
    *(undefined2 *)(param_1 + 0xc08) = 0;
    return;
  }
  uVar3 = DAT_0015f404;
  if ((*(uint *)(param_2 + 0xf8) & 8) != 0) {
    uVar3 = DAT_0015f408;
  }
  FUN_0036e168(uVar3,DAT_0015f414,DAT_0015f410,DAT_0015f40c,param_1 + 100);
  return;
}
