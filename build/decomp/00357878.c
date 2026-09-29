// OoT3D decomp @ 00357878  name=FUN_00357878  size=412

void FUN_00357878(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5)

{
  float fVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;
  undefined1 auStack_a4 [48];
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  int local_64;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined1 auStack_54 [48];

  if (param_4 == 0) {
    return;
  }
  FUN_00368944(param_1,param_5,0);
  local_74 = (float)VectorUnsignedToFloat(0xff - param_4,(byte)(in_fpscr >> 0x15) & 3);
  local_74 = local_74 * DAT_00357a14;
  if ((int)local_74 < 0x3f800000) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x194) + 0x10);
    local_70 = local_74;
    local_6c = local_74;
    local_68 = local_74;
    FUN_003688a8(iVar2,0,4,&local_74);
    fVar1 = DAT_00357a18;
    *(undefined1 *)(*(int *)(iVar2 + 4) + 0xe) = 1;
    local_60 = *param_2;
    local_5c = (float)param_2[1] + fVar1;
    local_58 = param_2[2];
    uVar3 = FUN_002a9e44(param_5,param_5 + 0xa98,&local_64,&local_60);
    if (local_64 == 0) {
      FUN_003713fc(*param_2,param_2[1],param_2[2],auStack_54,0);
    }
    else {
      FUN_003687b4(*param_2,uVar3,local_64,auStack_54);
      FUN_00372224(auStack_a4,auStack_54);
      FUN_003713fc(DAT_00357a1c,DAT_00357a20,DAT_00357a1c,auStack_54,1);
    }
    FUN_00371348(*param_3,fVar1,param_3[2],auStack_54,1);
    FUN_003721e0(*(undefined4 *)(param_1 + 0x194),auStack_54);
    *(undefined1 *)(*(int *)(param_1 + 0x194) + 0xac) = 1;
    FUN_003687a8(*(undefined4 *)(param_1 + 0x194));
    FUN_0036879c();
    uVar3 = FUN_003687a8(*(undefined4 *)(param_1 + 0x194));
    FUN_00368704(*(undefined4 *)(DAT_00357a24 + param_5),uVar3);
    FUN_00372170(*(undefined4 *)(param_1 + 0x194),0);
  }
  return;
}
