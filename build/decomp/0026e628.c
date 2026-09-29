// OoT3D decomp @ 0026e628  name=FUN_0026e628  size=448

void FUN_0026e628(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;

  iVar2 = DAT_0026e7e8;
  if ((*(byte *)(param_1 + 0x1bc) & 2) == 0) {
    if ((*(byte *)(param_1 + 0x1bd) & 2) == 0) {
      if ((((*(byte *)(param_1 + 0x1be) & 2) == 0) || (**(short **)(param_1 + 0x1b8) == 0x6b)) &&
         ((*(int *)(param_1 + 0x1a4) != DAT_0026e7ec || ((*(ushort *)(param_1 + 0x90) & 8) == 0))))
      goto LAB_0026e73c;
    }
    else {
LAB_0026e69c:
      local_1c = VectorSignedToFloat((int)*(short *)(param_1 + 0x1d2),(byte)(in_fpscr >> 0x15) & 3);
      local_14 = VectorSignedToFloat((int)*(short *)(param_1 + 0x1d6),(byte)(in_fpscr >> 0x15) & 3);
      local_18 = VectorSignedToFloat((int)*(short *)(param_1 + 0x1d4),(byte)(in_fpscr >> 0x15) & 3);
      FUN_003741e4(param_2,**(undefined4 **)(param_1 + 0x1e8),0,&local_1c,0);
    }
  }
  else if ((*(byte *)(param_1 + 0x1bd) & 2) != 0) goto LAB_0026e69c;
  uVar1 = DAT_0026e7f0;
  *(byte *)(param_1 + 0x1bc) = *(byte *)(param_1 + 0x1bc) & 0xfd;
  *(byte *)(param_1 + 0x1bd) = *(byte *)(param_1 + 0x1bd) & 0xfd;
  *(byte *)(param_1 + 0x1be) = *(byte *)(param_1 + 0x1be) & 0xfd;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffa;
  FUN_00375c44(param_2,param_1 + 0x28,0x1e,uVar1);
  *(int *)(param_1 + 0x1a4) = iVar2;
LAB_0026e73c:
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  FUN_00376864(param_1);
  if (*(int *)(param_1 + 0x1a4) != DAT_0026e7f4 && *(int *)(param_1 + 0x1a4) != iVar2) {
    FUN_00376340(DAT_0026e800,DAT_0026e7fc,DAT_0026e7f8,param_2,param_1,5);
    FUN_0037632c(param_1,param_1 + 0x1ac);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
    iVar2 = param_2 + 0x5c78;
    FUN_003761f0(param_2,iVar2,param_1 + 0x1ac);
    FUN_00376168(param_2,iVar2,param_1 + 0x1ac);
    FUN_003762a4(param_2,iVar2,param_1 + 0x1ac);
  }
  FUN_0037322c(DAT_0026e804,param_1);
  return;
}
