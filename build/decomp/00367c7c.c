// OoT3D decomp @ 00367c7c  name=FUN_00367c7c  size=220

void FUN_00367c7c(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_00343f0c(param_1,param_1 + 0x224c);
  puVar1 = DAT_00367d60;
  if ((*(char *)(DAT_00367d58 + 0xe) != '\0') && (param_2 == 0x102a)) {
    param_2 = DAT_00367d5c;
  }
  if (((*DAT_00367d60 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_00367d60), iVar2 != 0)) {
    FUN_0036788c(DAT_00367d64);
  }
  iVar2 = DAT_00367d70;
  FUN_004c0bc8(DAT_00367d70,param_2,param_3,1);
  if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_00367d60), iVar3 != 0)) {
    FUN_0036788c(iVar2 + -0x32c0);
  }
  *(undefined *)(iVar2 + 0xd) = 1;
  return;
}

