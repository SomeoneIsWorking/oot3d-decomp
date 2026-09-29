// OoT3D decomp @ 0027d748  name=FUN_0027d748  size=164

void FUN_0027d748(int param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;

  if (*(short *)(param_1 + 0x1c) == 0) {
    iVar2 = 3;
  }
  else if (*(short *)(param_1 + 0x1c) == 1) {
    iVar2 = 4;
  }
  else {
    iVar2 = 5;
  }
  uVar4 = FUN_0037571c(param_2);
  psVar1 = (short *)((ulonglong)uVar4 >> 0x20);
  bVar3 = (int)uVar4 != 0;
  if (bVar3) {
    psVar1 = *(short **)(&DAT_000022dc + param_2 + iVar2 * 4);
  }
  if ((bVar3 && psVar1 != (short *)0x0) && (*psVar1 == 2)) {
    *(undefined4 *)(param_1 + 0x3f8) = 2;
    *(undefined4 *)(param_1 + 0x3fc) = 1;
    FUN_0032b060(param_1,param_2);
    if (*(ushort *)(param_1 + 0x1c) < 2) {
      FUN_00375c44(param_2,param_1 + 0x28,0x14,DAT_0027d7ec);
      return;
    }
  }
  return;
}
