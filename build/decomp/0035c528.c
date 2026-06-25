// OoT3D decomp @ 0035c528  name=FUN_0035c528  size=248

void FUN_0035c528(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_0035c620;
  *(undefined4 *)(DAT_0035c620 + 0x88) = param_1;
  iVar3 = FUN_00366684(3);
  FUN_00355fac(0,1,0,8,param_4);
  FUN_00355fac(3,1,0,8);
  FUN_002d7878(1,0,1,0x7f,0xf);
  FUN_002d7878(1,3,1,0x7f,0xf);
  FUN_002d7854(1,0);
  iVar2 = DAT_0035c624;
  if (iVar3 != DAT_0035c624) {
    FUN_002d7854(1,3,0);
  }
  FUN_0036ec40(1,*(undefined4 *)(iVar1 + 0x88));
  FUN_00356058(0,0xffff,1,8);
  if (iVar3 != iVar2) {
    FUN_00356058(3,0xffff,1,8);
    return;
  }
  return;
}

