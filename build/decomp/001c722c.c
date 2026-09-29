// OoT3D decomp @ 001c722c  name=FUN_001c722c  size=208

void FUN_001c722c(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;

  if (*(int *)(param_1 + 0x1e0) < DAT_001c72fc) {
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  }
  uVar2 = DAT_001c7308;
  fVar1 = DAT_001c7300;
  FUN_0036e168(DAT_001c7300,DAT_001c7308,DAT_001c7304,DAT_001c7300,param_1 + 0xc4);
  FUN_0036e168(DAT_001c7310,uVar2,DAT_001c730c,fVar1,param_1 + 0xcc);
  if ((*(uint *)(DAT_001c7314 + param_2) & 3) == 0) {
    FUN_0033ff3c(param_2,param_1,param_1 + 0x28);
  }
  iVar3 = FUN_003731e0(param_1 + 0x1a4);
  if ((iVar3 != 0) && (*(float *)(param_1 + 0xc4) == fVar1)) {
    FUN_00366318(param_1);
    return;
  }
  return;
}
