// OoT3D decomp @ 001c52cc  name=FUN_001c52cc  size=92

void FUN_001c52cc(int param_1,int param_2)

{
  int iVar1;

  iVar1 = DAT_001c5328;
  *(uint *)(*(int *)(param_2 + 0x20ac) + 0x1714) =
       *(uint *)(*(int *)(param_2 + 0x20ac) + 0x1714) | 0x800000;
  if (*(short *)(iVar1 + param_2) == 3) {
    FUN_003716f0(param_2,DAT_001c532c,0x14,0x2a);
    *(undefined2 *)(DAT_001c5330 + 0xa0) = 0xfff1;
    *(undefined4 *)(param_1 + 0xbac) = DAT_001c5334;
  }
  return;
}
