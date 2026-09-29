// OoT3D decomp @ 003312f4  name=FUN_003312f4  size=316

void FUN_003312f4(float param_1,float param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined1 auStack_2c [12];
  float local_20;

  fVar1 = DAT_00331430;
  bVar3 = *(int *)(param_3 + 0x29ec) == 0;
  iVar2 = param_3;
  if (!bVar3) {
    iVar2 = param_3 + 0x2800;
  }
  if (!bVar3) {
    param_2 = *(float *)(iVar2 + 0x244);
    bVar3 = param_2 == DAT_00331430;
  }
  if ((!bVar3) && (param_1 <= param_2)) {
    param_1 = param_1 - param_2 * DAT_00331434;
    if (param_1 < DAT_00331430) {
      param_1 = DAT_00331430;
    }
    uVar4 = FUN_00372298((param_1 / (param_2 * DAT_00331438)) * DAT_0033143c);
    FUN_003fc0bc(param_4);
    FUN_003fc08c(param_4,1,*(undefined4 *)(param_3 + 0x29ec));
    FUN_00357a28(param_4,1,auStack_2c);
    *(undefined1 *)(param_4 + 0x1b7) = *(undefined1 *)(param_4 + 0x1b6);
    *(undefined1 *)(param_4 + 0x1b6) = 0;
    local_20 = (float)uVar4;
    FUN_00358964(param_4,1,auStack_2c);
    FUN_003589cc(param_4,1);
    *(undefined1 *)(param_4 + 0x1b6) = *(undefined1 *)(param_4 + 0x1b7);
    return;
  }
  FUN_00313cd4(param_4);
  *(undefined1 *)(param_4 + 0x1b7) = *(undefined1 *)(param_4 + 0x1b6);
  *(undefined1 *)(param_4 + 0x1b6) = 0;
  FUN_00357a28(param_4,1,auStack_2c);
  local_20 = fVar1;
  FUN_00358964(param_4,1,auStack_2c);
  FUN_003589cc(param_4,1);
  *(undefined1 *)(param_4 + 0x1b6) = *(undefined1 *)(param_4 + 0x1b7);
  return;
}
