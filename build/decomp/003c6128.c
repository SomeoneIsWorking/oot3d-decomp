// OoT3D decomp @ 003c6128  name=FUN_003c6128  size=216

void FUN_003c6128(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(iRam003c6200 + param_2);
  if (*(short *)(param_1 + 0xc10) == 0) {
    if (*(int *)(param_1 + 0x98c) != 2) {
      FUN_00348800(param_1,3);
    }
  }
  else if (*(int *)(param_1 + 0x98c) != 1) {
    FUN_00348800(param_1,1);
  }
  if ((*(ushort *)(iRam003c6204 + 0xee) & 0x40) != 0) {
    uVar2 = *(uint *)(iVar3 + 0x1714);
    if ((uVar2 & 0x1000000) == 0) {
      if (*(float *)(param_1 + 0x98) < *(float *)(param_1 + 0xbf0) + fRam003c6214) {
        *(uint *)(iVar3 + 0x1714) = uVar2 | 0x800000;
      }
      return;
    }
    *(uint *)(iVar3 + 0x1714) = uVar2 | 0x2000000;
    uVar1 = uRam003c6208;
    *(int *)(iVar3 + 0x1740) = param_1;
    *(short *)(iRam003c620c + param_1) = (short)uVar1;
    FUN_00367c7c(param_2,uVar1,0);
    *(undefined2 *)(param_1 + 0xc10) = 1;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
    *(undefined4 *)(param_1 + 0xbac) = uRam003c6210;
  }
  return;
}

