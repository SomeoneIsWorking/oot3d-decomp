// OoT3D decomp @ 003a3fe0  name=FUN_003a3fe0  size=308

void FUN_003a3fe0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;

  FUN_0031a3dc();
  uVar2 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_003a4114;
  FUN_00376340(DAT_003a4120,DAT_003a411c,DAT_003a4118,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar2;
  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  FUN_003264c8(param_1);
  iVar1 = DAT_003a4124;
  if ((*(int *)(param_1 + 0xbe4) != 0) && (*(int *)(*(int *)(param_1 + 0xbe4) + 0x21c) == 2)) {
    *(undefined2 *)(DAT_003a4124 + param_1) = 3;
    *(undefined2 *)(iVar1 + 4 + param_1) = 2;
    if (*(char *)(param_1 + 0x214) != '\x02') {
      FUN_00347f48(DAT_003a4128,param_1,DAT_003a412c,2,0);
      FUN_0037547c(DAT_003a4138,param_1 + 0x28,4,DAT_003a4134,DAT_003a4134,DAT_003a4130);
    }
  }
  iVar1 = DAT_003a4140;
  if ((*(int *)(param_1 + 0xbe4) != 0) && (*(int *)(*(int *)(param_1 + 0xbe4) + 0x21c) == 3)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 9;
    uVar2 = DAT_003a413c;
    *(short *)(iVar1 + param_1) = (short)DAT_003a413c;
    FUN_00367c7c(param_2,uVar2,0);
    FUN_00375c44(param_2,param_1 + 0x28,0x14,DAT_003a4144);
    *(undefined4 *)(param_1 + 0xbbc) = 0x2b;
    *(undefined4 *)(param_1 + 0xbc0) = 0;
  }
  return;
}
