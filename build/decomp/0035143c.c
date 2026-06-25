// OoT3D decomp @ 0035143c  name=FUN_0035143c  size=200

void FUN_0035143c(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = DAT_00351504;
  if ((param_1 == 0) || (0x32 < param_2)) {
    if (param_4 != (undefined4 *)0x0) {
      param_4[8] = DAT_00351504;
      param_4[5] = uVar3;
      param_4[4] = uVar3;
      param_4[3] = uVar3;
      param_4[2] = uVar3;
      param_4[1] = uVar3;
      *param_4 = uVar3;
    }
  }
  else if (param_4 != (undefined4 *)0x0) {
    if (param_2 == 0x32) {
      FUN_002bfcb4(param_1,*(undefined4 *)(*param_3 + 0x18),param_4);
      return;
    }
    iVar1 = *(int *)(DAT_00351508 + (int)param_3);
    puVar2 = (undefined4 *)(iVar1 + (*(ushort *)(param_1 + 2) & 0xffff1fff) * 0xc);
    uVar3 = puVar2[1];
    uVar4 = puVar2[2];
    *param_4 = *puVar2;
    param_4[1] = uVar3;
    param_4[2] = uVar4;
    puVar2 = (undefined4 *)(iVar1 + (*(ushort *)(param_1 + 4) & 0xffff1fff) * 0xc);
    uVar3 = puVar2[1];
    uVar4 = puVar2[2];
    param_4[3] = *puVar2;
    param_4[4] = uVar3;
    param_4[5] = uVar4;
    puVar2 = (undefined4 *)(iVar1 + (uint)*(ushort *)(param_1 + 6) * 0xc);
    uVar3 = puVar2[1];
    uVar4 = puVar2[2];
    param_4[6] = *puVar2;
    param_4[7] = uVar3;
    param_4[8] = uVar4;
    return;
  }
  return;
}

