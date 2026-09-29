// OoT3D decomp @ 001c5338  name=FUN_001c5338  size=160

void FUN_001c5338(int param_1,int param_2)

{
  int iVar1;

  iVar1 = *(int *)(param_2 + 0x20ac);
  if (3 < *(ushort *)(param_2 + 0x2b7e)) {
    *(undefined4 *)(param_1 + 0x3f4) = DAT_001c53d8;
    *(undefined2 *)(param_2 + 0x2b7e) = 4;
    *(undefined4 *)(iVar1 + 0x1740) = 0;
    return;
  }
  if (*(ushort *)(param_2 + 0x2b7e) == 3) {
    FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_001c53dc);
    *(undefined2 *)(DAT_001c53e0 + param_1) = 0x1e;
    *(ushort *)(DAT_001c53e4 + 0x20) = *(ushort *)(DAT_001c53e4 + 0x20) | 0x4000;
    *(undefined4 *)(param_1 + 0x3f4) = DAT_001c53e8;
    *(undefined2 *)(param_2 + 0x2b7e) = 4;
    return;
  }
  *(uint *)(iVar1 + 0x1714) = *(uint *)(iVar1 + 0x1714) | 0x800000;
  return;
}
