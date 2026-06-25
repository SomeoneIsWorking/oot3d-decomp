// OoT3D decomp @ 004bc634  name=FUN_004bc634  size=224

undefined4 FUN_004bc634(int param_1,undefined4 param_2)

{
  int iVar1;
  short *psVar2;
  
  psVar2 = *(short **)(param_1 + 0x1224);
  if (psVar2 == (short *)0x0) {
    FUN_0036aef0(param_2,param_1);
  }
  iVar1 = FUN_0033b384(param_2,param_1);
  if (iVar1 == 0) {
    if ((*(uint *)(param_1 + 0x1710) & 0x800) == 0) {
      iVar1 = FUN_0033b384(param_2,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_0036b4ec(param_1 + 0x1764,param_2);
      if (iVar1 != 0) {
        FUN_00359aa0(param_1 + 0x1764,param_2,0xd5);
      }
      if ((*psVar2 == 0x19) && (*(float *)(param_1 + 100) <= DAT_004bc714)) {
        *(undefined4 *)(param_1 + 0x74) = DAT_004bc718;
        *(undefined4 *)(param_1 + 0x70) = DAT_004bc71c;
        *(short *)(param_1 + 0x2280) = (short)(int)*(float *)(param_1 + 0x2c);
      }
    }
  }
  return 1;
}

