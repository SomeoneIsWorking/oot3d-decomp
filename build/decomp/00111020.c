// OoT3D decomp @ 00111020  name=FUN_00111020  size=264

void FUN_00111020(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  if (*(short *)(param_1 + 0x1c0) < 1) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00111128;
    FUN_0036aa8c(param_2,(int)*(char *)(param_1 + 3));
    uVar1 = DAT_00111130;
    iVar2 = FUN_0036aa20(DAT_00111134,DAT_00111130,DAT_0011112c,param_2 + 0x208c,param_1,param_2,2,0
                         ,0,0,5);
    if (iVar2 != 0) {
      *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + 1;
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
    iVar2 = FUN_0036aa20(DAT_0011113c,uVar1,DAT_00111138,param_2 + 0x208c,param_1,param_2,2,0,0,0,5)
    ;
    if (iVar2 != 0) {
      *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + 1;
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
    FUN_0036ec14(param_2,(int)*(char *)(param_1 + 3));
    return;
  }
  return;
}
