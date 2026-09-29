// OoT3D decomp @ 00485994  name=FUN_00485994  size=124

bool FUN_00485994(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  iVar1 = FUN_002e1ef0();
  if (iVar1 != 0) {
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    puVar2 = *(uint **)(param_1 + (*(ushort *)(DAT_00485a10 + param_1) & 1) * 0x60 + param_2 * 4 +
                       0x10b0);
    puVar2[1] = *param_3;
    puVar2[2] = uVar3;
    puVar2[3] = uVar4;
    puVar2[4] = uVar5;
    uVar3 = param_3[5];
    uVar4 = param_3[6];
    uVar5 = param_3[7];
    puVar2[5] = param_3[4];
    puVar2[6] = uVar3;
    puVar2[7] = uVar4;
    puVar2[8] = uVar5;
    uVar3 = param_3[9];
    uVar4 = param_3[10];
    uVar5 = param_3[0xb];
    puVar2[9] = param_3[8];
    puVar2[10] = uVar3;
    puVar2[0xb] = uVar4;
    puVar2[0xc] = uVar5;
    *puVar2 = *puVar2 | 0xe000000;
  }
  return iVar1 != 0;
}
