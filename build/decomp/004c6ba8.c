// OoT3D decomp @ 004c6ba8  name=FUN_004c6ba8  size=372

void FUN_004c6ba8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;

  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x40;
  FUN_00316040(param_2,param_1,0);
  iVar1 = FUN_0034b33c(DAT_004c6d1c,param_2,param_1,param_1 + 0x254);
  if (iVar1 != 0) {
    if ((iVar1 < 1) &&
       (iVar1 = FUN_0036b4ec(param_1 + 0x254,param_2), puVar3 = DAT_004c6d20, iVar1 == 0)) {
      if (*(short *)(DAT_004c6d24 + param_1) != 0) {
        FUN_00360a1c(param_1,DAT_004c6d20 + 4);
        puVar3 = puVar3 + 2;
      }
      iVar1 = FUN_0036b1e0(*puVar3,param_1 + 0x254);
      if ((iVar1 == 0) && (iVar1 = FUN_0036b1e0(puVar3[1],param_1 + 0x254), iVar1 == 0)) {
        return;
      }
      local_24 = *(undefined4 *)(param_1 + 0x28);
      local_20 = *(float *)(param_1 + 0x2c) + DAT_004c6d28;
      local_1c = *(undefined4 *)(param_1 + 0x30);
      fVar4 = (float)FUN_00358410(param_2 + 0xa98,&local_14,&local_18,&local_24);
      if (fVar4 == DAT_004c6d2c) {
        return;
      }
      uVar2 = FUN_00314c14(param_2 + 0xa98,local_14,local_18);
      *(undefined4 *)(DAT_004c6d30 + param_1) = uVar2;
      FUN_0034bd3c(param_1);
      return;
    }
    FUN_0035fb14(param_1);
    FUN_0036b96c(param_1);
    FUN_002c0948(param_1,param_2);
  }
  *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xffdfffff;
  return;
}
