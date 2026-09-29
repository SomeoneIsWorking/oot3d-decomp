// OoT3D decomp @ 00105440  name=FUN_00105440  size=192

void FUN_00105440(int param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;

  iVar3 = *(int *)(param_2 + 0x20ac);
  if (*(int *)(iVar3 + 0x12b8) != 0) {
    *(undefined2 *)(*(int *)(iVar3 + 0x12b8) + 0x118) = 10;
  }
  *(undefined2 *)(iVar3 + 0x118) = 10;
  iVar2 = DAT_00105500;
  if (*(short *)(param_1 + 0xd88) == 2) {
    if (((*(ushort *)(DAT_00105500 + 0xee) & 0x800) == 0) &&
       (puVar1 = (ushort *)(DAT_00105500 + 0x124), (*puVar1 & 0x800) != 0)) {
      *(ushort *)(DAT_00105500 + 0xee) = *(ushort *)(DAT_00105500 + 0xee) | 0x800;
      *(ushort *)(iVar2 + 0x124) = *puVar1 | 0x800;
    }
    FUN_003715d0(param_1,param_2,0,0x26);
    *(ushort *)(DAT_00105504 + 0x8a) = *(ushort *)(DAT_00105504 + 0x8a) & 0xfff0 | 0x8000;
    FUN_00371680(param_2,4,0);
    *(undefined2 *)(param_1 + 0xd88) = 0;
    *(uint *)(iVar3 + 0x1710) = *(uint *)(iVar3 + 0x1710) & 0xdfffffff;
  }
  return;
}
