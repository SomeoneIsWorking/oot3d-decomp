// OoT3D decomp @ 0035af20  name=FUN_0035af20  size=356

void FUN_0035af20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,short param_9,
                 short param_10)

{
  uint *puVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;

  puVar1 = DAT_0035b084;
  if (((*DAT_0035b084 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_0035b084), iVar5 != 0)) {
    FUN_0036788c(DAT_0035b088);
  }
  uVar2 = DAT_0035b094;
  sVar3 = FUN_00338ce8(DAT_0035b094,1,0xffffffff);
  if (((*puVar1 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_0035b084), iVar5 != 0)) {
    FUN_0036788c(DAT_0035b088);
  }
  sVar4 = FUN_00338ce8(uVar2,0,0xffffffff);
  z_actor_003738d0(param_1,param_2,param_3,param_7 + 0x208c,param_7,10,0,(int)param_9,0,
                   (int)(short)((ushort)DAT_0035b098 | sVar3 << 5),1);
  z_actor_003738d0(param_4,param_5,param_6,param_7 + 0x208c,param_7,10,0,(int)param_10,0,
                   (int)(short)((ushort)DAT_0035b09c | sVar4 << 5),1);
  return;
}
