// OoT3D decomp @ 002df620  name=FUN_002df620  size=136

undefined4 FUN_002df620(int param_1,int *param_2,uint param_3)

{
  if ((param_2 == (int *)0x0) || (param_3 < 0x10)) {
    return 0;
  }
  *(int **)(param_1 + 4) = param_2;
  *(uint *)(param_1 + 8) = param_3;
  if ((*param_2 == DAT_002df6a8) &&
     (((int)(short)(ushort)*(byte *)((int)param_2 + 0xd) *
       (int)(short)(ushort)*(byte *)((int)param_2 + 0xe) * (uint)*(byte *)(param_2 + 3) >> 3) *
      (uint)*(ushort *)((int)param_2 + 6) + (uint)*(ushort *)(param_2 + 1) * 8 + 0x10 <= param_3)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return 0;
}
