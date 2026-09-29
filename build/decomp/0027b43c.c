// OoT3D decomp @ 0027b43c  name=FUN_0027b43c  size=280

void FUN_0027b43c(int param_1,int param_2)

{
  undefined4 uVar1;

  uVar1 = FUN_00372f38(param_1,param_2,param_1 + 0x1ac,7,param_1 + 0x1b0,9,param_1 + 0x1b4,10,
                       param_1 + 0x1b8,2,param_1 + 0x1bc,0,param_1 + 0x1c0,1,0);
  uVar1 = FUN_00372f0c(uVar1,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1b4) + 0xc),uVar1);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1b4) + 0xc) + 0x10) = 1;
  if (*DAT_0027b554 == 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1b4) + 0xc) + 8) =
         *(undefined4 *)(param_2 + 0x7f7c);
    FUN_003586ec();
  }
  uVar1 = DAT_0027b560;
  if (*(short *)(param_1 + 0x1c) == 0) {
    FUN_003510b0(param_1,DAT_0027b564);
    uVar1 = DAT_0027b568;
  }
  else {
    if (*(short *)(param_1 + 0x1c) != 1) {
      return;
    }
    if ((*(ushort *)(DAT_0027b558 + 0xf4) & 0x800) != 0) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0027b55c;
  }
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  return;
}
