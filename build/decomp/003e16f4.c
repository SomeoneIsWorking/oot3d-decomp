// OoT3D decomp @ 003e16f4  name=FUN_003e16f4  size=208

void FUN_003e16f4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  iVar4 = *(int *)(DAT_003e17c4 + param_2);
  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_003e17cc;
  FUN_0036fc20(DAT_003e17cc,DAT_003e17c8,param_1 + 0xc4);
  FUN_00373500(DAT_003e17d4,uVar1,DAT_003e17d0,param_1 + 0x664);
  if (*(short *)(param_1 + 0x64a) == 0) {
    FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),5,DAT_003e17d8,0);
  }
  iVar2 = DAT_003e17e0;
  uVar1 = DAT_003e17dc;
  if (*(uint *)(param_1 + 0xc4) < 0xc0000000) {
    *(undefined4 *)(param_1 + 0xc4) = DAT_003e17dc;
    uVar3 = DAT_003e17e4;
    if (*(char *)(iVar2 + iVar4) == '\0') {
      if (*(short *)(param_1 + 0x648) == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 100) = uVar1;
      uVar3 = DAT_003e17ec;
      *(undefined4 *)(param_1 + 0x70) = DAT_003e17e8;
    }
    *(undefined4 *)(param_1 + 0x638) = uVar3;
  }
  return;
}
