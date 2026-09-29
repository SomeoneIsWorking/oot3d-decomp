// OoT3D decomp @ 002970dc  name=FUN_002970dc  size=204

void FUN_002970dc(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined1 auStack_1c [12];

  iVar1 = FUN_003aa608(param_2 + 0xa98,param_1 + 8,param_1 + 0x28,auStack_1c,param_1 + 0x7c,0,0,1,1,
                       &local_20,param_1);
  if (((iVar1 != 0) &&
      (psVar2 = (short *)FUN_00359690(param_2 + 0xa98,local_20), psVar2 != (short *)0x0)) &&
     (*psVar2 == 0xff)) {
    uVar3 = DAT_002971b0;
    if ((psVar2[0xe] & 0xfU) != 3 && (psVar2[0xe] & 0xfU) != 7) {
      uVar3 = DAT_002971b4;
    }
    FUN_0037547c(uVar3,0,4,DAT_002971ac,DAT_002971ac,DAT_002971a8);
    FUN_00375c10(param_2,(int)*(short *)(param_1 + 0x1c));
    FUN_00374428(param_1);
  }
  return;
}
