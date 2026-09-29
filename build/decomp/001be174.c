// OoT3D decomp @ 001be174  name=FUN_001be174  size=744

void FUN_001be174(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;

  if (*(char *)(param_1 + 0xc48) == '\0') {
    *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) * DAT_001be45c;
    if ((*(short *)(param_1 + 0x1c) < 3) && ((*(byte *)(param_1 + 0xb8d) & 2) != 0)) {
      *(byte *)(param_1 + 0xb8d) = *(byte *)(param_1 + 0xb8d) & 0xfd;
      uVar4 = DAT_001be460;
      cVar3 = *(char *)(param_1 + 0xb7) + -1;
      *(char *)(param_1 + 0xb7) = cVar3;
      uVar2 = DAT_001be484;
      if (cVar3 == '\0') {
        FUN_00373d40(param_1 + 0x1a4,2);
        FUN_00375bcc(param_1,uVar4);
        local_38 = 1.68156e-44;
        FUN_00375ed8(param_1,0x400000,0xff,0);
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
        uVar4 = FUN_00367d74(param_2);
        *(undefined4 *)(param_1 + 0xc40) = uVar4;
        FUN_00320d7c(param_2,0,1);
        FUN_00320d7c(param_2,(int)(short)*(undefined4 *)(param_1 + 0xc40),7);
        FUN_0036e980(param_2,param_1,5);
        local_38 = 0.0;
        local_34 = 0.0;
        local_30 = (float)DAT_001be464;
        local_2c = 1.4013e-45;
        uVar4 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                                 *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0xde,0);
        *(undefined4 *)(param_1 + 0xc44) = uVar4;
        FUN_00375d3c(param_2,param_2 + 0x208c,param_1,6);
        iVar5 = *(int *)(DAT_001be468 + param_2);
        fVar6 = (float)FUN_003696ec(*(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x28),
                                    *(float *)(iVar5 + 0x30) - *(float *)(param_1 + 0x30));
        fVar1 = DAT_001be470;
        fVar6 = fVar6 + DAT_001be46c;
        local_38 = (*(float *)(param_1 + 0x28) + *(float *)(iVar5 + 0x28)) * DAT_001be474;
        local_34 = *(float *)(iVar5 + 0x2c) + DAT_001be478;
        local_30 = (*(float *)(param_1 + 0x30) + *(float *)(iVar5 + 0x30)) * DAT_001be474;
        fVar7 = (float)FUN_003727f0(fVar6);
        local_2c = local_38 + fVar7 * fVar1;
        local_28 = *(float *)(iVar5 + 0x2c) - DAT_001be47c;
        fVar6 = (float)FUN_00372674(fVar6);
        local_24 = local_30 + fVar6 * fVar1;
        FUN_00367b14(param_2,(int)(short)*(undefined4 *)(param_1 + 0xc40),&local_38,&local_2c);
        *(undefined4 *)(param_1 + 0x9a8) = 1;
        *(undefined2 *)(param_1 + 0xb7a) = 0;
        *(undefined4 *)(param_1 + 0x9ac) = DAT_001be480;
      }
      else {
        *(undefined4 *)(param_1 + 0x9a8) = 3;
        *(undefined4 *)(param_1 + 0x6c) = uVar2;
        *(undefined2 *)(param_1 + 0xb78) = 1000;
        *(undefined2 *)(param_1 + 0xb74) = 0x1e;
        *(undefined1 *)(param_1 + 0xb6) = 0xff;
        FUN_00375bcc(param_1,uVar4);
        local_38 = 1.68156e-44;
        FUN_00375ed8(param_1,0x400000,0xff,0);
        *(undefined4 *)(param_1 + 0x9ac) = DAT_001be488;
      }
    }
    (**(code **)(param_1 + 0x9ac))(param_1,param_2);
    if (*(short *)(param_1 + 0x1c) < 3) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0xa08);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0xa0c);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0xa10);
    }
    if (3 < *(int *)(param_1 + 0x9a8)) {
      FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0xb7c);
      return;
    }
  }
  return;
}
