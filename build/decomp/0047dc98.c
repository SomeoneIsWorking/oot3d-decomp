// OoT3D decomp @ 0047dc98  name=FUN_0047dc98  size=116

bool FUN_0047dc98(int param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,
                 undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  uint *puVar2;

  iVar1 = FUN_002e1ef0();
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_1 + (*(ushort *)(DAT_0047dd0c + param_1) & 1) * 0x60 + param_2 * 4 +
                       0x10b0);
    *(undefined2 *)(puVar2 + 0x10) = param_7;
    *(undefined2 *)((int)puVar2 + 0x42) = param_6;
    *(undefined2 *)(puVar2 + 0x11) = param_5;
    *(undefined2 *)((int)puVar2 + 0x46) = param_4;
    *(undefined2 *)(puVar2 + 0x12) = param_3;
    *puVar2 = *puVar2 | 0x1000000;
  }
  return iVar1 != 0;
}
