// OoT3D decomp @ 004a30a0  name=FUN_004a30a0  size=256

undefined4
FUN_004a30a0(undefined4 param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5_00,undefined4 param_5,undefined4 param_6,undefined4 param_7,
            undefined4 param_8,undefined4 param_9,uint param_10)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  puVar1 = DAT_004a31a0;
  uVar4 = 0;
  bVar5 = (param_10 & 2) != 0;
  puVar2 = param_2;
  if (bVar5) {
    puVar2 = (ushort *)(uint)*param_2;
  }
  if ((bVar5 && puVar2 != DAT_004a31a0) &&
     (puVar2 = (ushort *)
               FUN_002bded8(param_1,param_2,param_3,param_4,param_5_00,param_5,param_6,param_7,
                            param_8,param_9,param_10), puVar2 != (ushort *)0x0)) {
    uVar4 = 1;
  }
  bVar5 = (param_10 & 1) != 0;
  if (bVar5) {
    puVar2 = (ushort *)(uint)param_2[1];
  }
  if ((bVar5 && puVar2 != puVar1) &&
     (puVar2 = (ushort *)
               FUN_002bded8(param_1,param_2 + 1,param_3,param_4,param_5_00,param_5,param_6,param_7,
                            param_8,param_9,param_10), puVar2 != (ushort *)0x0)) {
    uVar4 = 1;
  }
  bVar5 = (param_10 & 4) != 0;
  if (bVar5) {
    puVar2 = (ushort *)(uint)param_2[2];
  }
  if ((bVar5 && puVar2 != puVar1) &&
     (iVar3 = FUN_002bded8(param_1,param_2 + 2,param_3,param_4,param_5_00,param_5,param_6,param_7,
                           param_8,param_9,param_10), iVar3 != 0)) {
    uVar4 = 1;
  }
  return uVar4;
}

