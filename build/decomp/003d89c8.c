// OoT3D decomp @ 003d89c8  name=FUN_003d89c8  size=360

void FUN_003d89c8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uStack_18;
  float fStack_14;
  undefined4 uStack_10;

  if (((*(uint *)(iRam003d8b30 + 0x28) & 1) == 0) &&
     (iVar3 = FUN_003679b4(uRam003d8b34), puVar2 = puRam003d8b3c, uVar1 = uRam003d8b38, iVar3 != 0))
  {
    *puRam003d8b3c = uRam003d8b38;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  iVar3 = FUN_003731e0(param_1 + 0x208);
  if (iVar3 != 0) {
    uStack_18 = *(undefined4 *)(param_1 + 0x28);
    fStack_14 = *(float *)(param_1 + 0x2c) + fRam003d8b40;
    uStack_10 = *(undefined4 *)(param_1 + 0x30);
    FUN_003642f4(param_2,&uStack_18,puRam003d8b3c,puRam003d8b3c,200,0,0xff,0xff,0xff,0xff,0x96,0x96,
                 0x96,1,0x10,1);
    fStack_14 = *(float *)(param_1 + 0x2c) + fRam003d8b44;
    FUN_0036f9d0(uRam003d8b48,param_2,&uStack_18,0,0xc,3,0xf,0xffffffff,10,0);
    FUN_00374444(param_2,param_1,param_1 + 0x28,0x30);
    if (*(int *)(param_1 + 0x128) != 0) {
      FUN_00375d3c(param_2,param_2 + 0x208c,*(int *)(param_1 + 0x128),6);
    }
    FUN_00374428(param_1);
  }
  return;
}
