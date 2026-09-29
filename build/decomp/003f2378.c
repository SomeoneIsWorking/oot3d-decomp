// OoT3D decomp @ 003f2378  name=FUN_003f2378  size=624

void FUN_003f2378(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;

  iVar4 = *(int *)(DAT_003f25e8 + param_2);
  if (((*(byte *)(param_1 + 0x1b5) & 2) == 0) ||
     ((*(uint *)(DAT_003f25ec + 0xbc) & *(uint *)(DAT_003f25f0 + 8)) == 0)) {
    if ((*(int *)(param_1 + 0x98) <= DAT_003f2624) &&
       (*(ushort *)(DAT_003f25ec + 0xc) - 0x4555 < DAT_003f2628)) {
      local_38 = (undefined2)
                 (int)(*(float *)(iVar4 + 0x2394) + *(float *)(param_2 + 0x3194) * DAT_003f262c);
      local_36 = (undefined2)
                 (int)((*(float *)(iVar4 + 0x2398) - DAT_003f2630) +
                      *(float *)(param_2 + 0x3198) * DAT_003f262c);
      local_34 = (undefined2)
                 (int)(*(float *)(iVar4 + 0x239c) + *(float *)(param_2 + 0x319c) * DAT_003f262c);
      *(undefined2 *)(param_1 + 0x200) = local_38;
      *(undefined2 *)(param_1 + 0x202) = local_36;
      *(undefined2 *)(param_1 + 0x204) = local_34;
      FUN_0038ce68(param_1 + 0x1a4,&local_38);
      FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
      return;
    }
  }
  else {
    piVar5 = *(int **)(param_1 + 0x1d8);
    iVar4 = 0;
    if (piVar5 != (int *)0x0) {
      iVar4 = *piVar5;
    }
    if (piVar5 != (int *)0x0 && iVar4 != 0) {
      FUN_00374428();
    }
    iVar3 = DAT_003f2604;
    iVar4 = DAT_003f2600;
    uVar2 = DAT_003f25fc;
    uVar1 = DAT_003f25f8;
    uVar6 = DAT_003f25f4;
    if (*(char *)((uint)*(byte *)(DAT_003f2600 + 4) + DAT_003f2604) == -1) {
      FUN_00372244(param_2 + 0x5fcc,0x5a,DAT_003f2608);
    }
    else {
      local_44 = DAT_003f260c;
      FUN_0037547c(DAT_003f2608,0,4,DAT_003f2610,DAT_003f2610);
    }
    if (*(char *)((uint)*(byte *)(iVar4 + 4) + iVar3) == -1) {
      local_44 = 0;
      local_40 = 7;
      local_3c = 1;
      z_actor_003738d0(param_2 + 0x208c,param_2,0x10f,0,0);
      iVar4 = param_2 + (uint)*(byte *)(param_2 + 0x3a5a) * 0x80;
      if (*(int *)(DAT_003f2614 + iVar4) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 0x3a6c;
      }
      uVar6 = FUN_00375750(iVar4,1);
      FUN_0037573c(param_2,uVar6);
      *(undefined1 *)(DAT_003f2618 + 0x5a2) = 1;
    }
    else {
      local_44 = uVar6;
      local_40 = uVar1;
      local_3c = uVar2;
      iVar4 = FUN_0036df58(param_2,&local_44,0xe);
      uVar6 = DAT_003f2620;
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x6c) = DAT_003f261c;
        *(short *)(iVar4 + 0x1b2) = (short)uVar6;
      }
    }
    FUN_00374428(param_1);
  }
  return;
}
