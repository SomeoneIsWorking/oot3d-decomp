// OoT3D decomp @ 00493568  name=FUN_00493568  size=160

bool FUN_00493568(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;

  iVar1 = DAT_00497c84;
  uVar3 = **(uint **)(*(int *)(param_1 + param_2 * 4) + 0x68) & 0xff;
  iVar2 = FUN_002e1ef0();
  if (iVar2 != 0) {
    puVar4 = *(uint **)(iVar1 + (*(ushort *)(iVar1 + 0x131a) & 1) * 0x60 + uVar3 * 4 + 0x10b0);
    FUN_0034338c(*(undefined4 *)
                  (iVar1 + (uint)*(ushort *)(iVar1 + 0x131e) * 0x60 + uVar3 * 4 + 0x1230),param_3,
                 0x20);
    *puVar4 = *puVar4 | 4;
  }
  return iVar2 != 0;
}
